def sockMerchant(n, ar):
	l1=[]
	cont=1
	for f in ar:
		if f in l1:
			l1.remove(f)
			cont+=1
		else:
			l1.append(f)

	return cont
