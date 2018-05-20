from bs4 import BeautifulSoup
import requests
import sys

sauce = requests.get('https://propakistani.pk/category/sports/')
soup= BeautifulSoup(sauce.content,'html.parser')

#sauce= open('/root/Desktop/temp.html','read')
#soup= BeautifulSoup(sauce,'lxml')

text_lits=[]

i=0

while i<5:
	
	for alpha in soup.find_all('article'):
		text_lits.append(alpha.find('p').text)


	nav=soup.find('nav',{"aria-label":"Page navigation"})

	link=nav.select('li[class="page-item"] a  ')


	sauce = requests.get(link[0]['href'])
	soup= BeautifulSoup(sauce.content,'html.parser') 
	i+=1


for i in text_lits:
	for j in sys.argv :
		if j in i:
			print i
