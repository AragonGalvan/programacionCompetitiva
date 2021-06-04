def main():
	print(funci(23))

def funci(num):
	num=str(num)
	nf=""
	for l in num:
		l=int(l)
		l*=l
		nf+=str(l)

	return int(nf)

main()
