# import clara
import subprocess
import os
import pdb
import glob

import copy

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


		self.clara.clusterdir = dirname
		self.clara.models = self.correct_pg
		print len(self.clara.models)
		self.clara.cluster()
		#pdb.set_trace()
		print "New", len(self.incorrect_pg)
		self.correct_clusters = []
		files = list(set(glob.glob(dirname+'/*')) - set(glob.glob(dirname+'/*.json')))
		for cor in files:
			self.correct_clusters.append(self.clara.process_source(cor))



		for inc in self.incorrect_pg:
			print "Repair for ", inc.name
			self.clara.models = self.correct_clusters+[inc]
			self.clara.feedback()
			print "\n"

