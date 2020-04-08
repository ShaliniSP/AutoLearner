# import clara
import subprocess
import os
import pdb
import glob

import copy
import pdb
import re

class Grader():

	def __init__(self, models, numc, numi, clara):
		print len(models), numc, numi
		self.models = copy.deepcopy(models)
		# print len(models), numc, numi

		self.numc = numc
		self.numi = numi
		self.clara = clara
		self.correct_pg = self.models[:numc]
		self.incorrect_pg = self.models[numc:numc+numi]


		# pass

	def grade(self):
		# cluster the correct specs
			# create dir
		# call feedback in a loop for each incorrect spec
		try:
			dirname = "Correct_clusters"
			os.mkdir(dirname)
		except:
			#run rm * 
			subprocess.call(["rm", dirname+"/*"])
			print "Dir exists. Overwriting"

		# pdb.set_trace()
		self.clara.clusterdir = dirname
		self.clara.models = self.correct_pg
		print len(self.clara.models)
		self.clara.cluster()
		#pdb.set_trace()
		print "New", len(self.incorrect_pg)
		self.correct_clusters = []
		files = list(set(glob.glob(dirname+'/*')) - set(glob.glob(dirname+'/*.json')))
		for cor in files:
			self.correct_clusters.append(self.clara.process_source(cor)[0])


		cost_dict = {}
		for inc in self.incorrect_pg:
			print "Repairing ", inc.name
			self.clara.models = self.correct_clusters+[inc]
			total_cost = 0   
			for f in self.clara.feedback():
				costs = re.findall(r'\(cost(.*?)\)', f)
				for c in costs:
					cost_val = c.split("=")
					total_cost += eval(cost_val[1])
			if(total_cost != 0):
				cost_dict[inc.name] = total_cost
		a1_sorted_keys = sorted(cost_dict, key=cost_dict.get)

		print "Ranking:"
		i = 0
		costs = list(cost_dict.values())
		m = max(costs)
		for r in a1_sorted_keys:
			marks = 10 - cost_dict[r] / m * 9
			print i + 1, ".", r, " Cost: ", cost_dict[r], " Marks: ", round(marks, 1)
			i += 1

