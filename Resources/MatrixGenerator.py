animalAttributes = ["aggression", "attachment", "obidience", "energy", "crate", "hypo", 
	"spayed", "goodw/child", "loudness", "cost", "avg$year", "smartness", "clean"]

clientAttributes = ["aggression", "smartness", "attachment", "patience", "homeType", "#OfChildren", "freeTime",
	"crate", "hypo", "spayed", "budget", "loudnessTol", "budget$year"]
	
a = ['a1','a2','a3','a4','a5']
b = ['b1','b2','b3','b4','b5']

'''	
for animalAttr in animalAttributes:
	for clientAttr in clientAttributes:
		print ( "(" + animalAttr + ") ("+ clientAttr+")", end="")
	print()
'''
f= open("results2.txt","w+")

for animalAttr in animalAttributes:
	for clientAttr in clientAttributes:
		str = "(" + animalAttr + ")("+ clientAttr+")"
		size = len(str)
		spaces = " " * (30-size)
		f.write (str+spaces)
	f.write("\n")
	f.write("\n")
