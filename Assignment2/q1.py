import requests, urllib, os
from bs4 import BeautifulSoup
from StringIO import StringIO
import datetime

def WriteToFile(TextData,file_t):
	now = datetime.datetime.now()
	file_t.write(now.strftime("%Y-%m-%d %H:%M:%S")+" "+TextData)
	file_t.write('\n')

link='https://download.quranicaudio.com/quran/'
sauce = requests.get(link)
soup= BeautifulSoup(sauce.content,'html.parser')

directory="/root/Desktop/pythonassign/assignment/task4/"



if not os.path.exists(directory):
    os.makedirs(directory)

file_1=open(directory+"log.txt","w+")
qari_names=soup.body.find_all('a')
delta=(len(qari_names)-1)
WriteToFile("total qari "+str(delta),file_1)
sigma=0
for i in  qari_names:
	
	if i.text=="../":
		continue
	WriteToFile("start process "+str(sigma)+" out of "+str(delta),file_1)
	sigma+=1
		
	temp=directory+i.text
	
	if not os.path.exists(temp):
		os.makedirs(temp)
	WriteToFile(i.text,file_1)
			
	sauce2 = requests.get(link+i.text)
	soup2= BeautifulSoup(sauce2.content,'html.parser')
	qirat=soup2.body.find_all('a')
	
	surah_link=[]
	
	for j in  qirat:
		if j.text=="../":
			continue
		temp2=link+i.text+j.text
		surah_link.append(temp2)
	paths=[]
	for j in surah_link[-2:]:
		
		sauce3=urllib.urlopen(j)
		filename = j.split("/")[-1]
		WriteToFile(str(i.text)+" "+filename+" start",file_1)
		song = open(temp+filename, "wb")
		paths.append(temp+filename)
		buff=sauce3.read()
		song.write(buff)
		song.close()
		WriteToFile(str(i.text)+" "+filename+" end",file_1)
		print ("surrah written at %s" %(temp+filename))		
	
	command="cat"
	for j in paths:
		command=command+" "+j
	
	WriteToFile("merging the files of "+str(i.text)+" start",file_1)
	
	command=command+">"+temp+"/second_half.mp3"
	os.system(command)
	WriteToFile("merging the files of "+str(i.text)+" start",file_1)
