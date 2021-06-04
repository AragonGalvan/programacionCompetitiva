def filter(l):
	lr=[]
	for el in l:
		if type(el) == type(0):
			lr.append(el)
	return lr

print(filter([0,20,"perro",40,"aa"]))
