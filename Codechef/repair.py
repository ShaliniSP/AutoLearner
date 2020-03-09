import os
import pandas
import glob
import subprocess
import re
import sys
#root = "~/Desktop/datasets/"
# traverse root directory, and list directories as dirs and files as files
for dirpath, dirnames, filenames in os.walk("CCTS_Working"):
	if re.match(r'.*PY.*', dirpath):
		continue
	if not dirnames:
		if re.match(r'.*wrong.*', dirpath):
			#print(dirpath)
			
			cluster_files = glob.glob(dirpath + '/../accepted_codes/Clusters/*.c')
			files = glob.glob(dirpath + '/*.c')
			#print(cluster_files)
			# clusterdir = dirpath + '/Clusters'
			# print('clara', 'cluster', dirpath + '/.c', '--clusterdir', , '--insfile', dirpath + '/../../../input.txt' )
			for f in files:
				print("Result of " +  f + ":")
				result = subprocess.run(['clara', 'feedback', *cluster_files, f, '--insfile', dirpath + '/../../../input.txt', '--verbose', '0' ],  stdout=subprocess.PIPE)
				print(result.stdout)
				print()
				print()
				sys.stderr.write('\n------------\n' + f + '\n')
				
			#print(' '.join(files) )