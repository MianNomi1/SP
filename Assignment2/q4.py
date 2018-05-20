import sys
import psutil

for i in range(1,len(sys.argv)):
	p = psutil.Process(int(sys.argv[i]))
	print(dir(p))




#process = sys.argv[1]
#arr = os.system('cat /proc/%s/status',process)
