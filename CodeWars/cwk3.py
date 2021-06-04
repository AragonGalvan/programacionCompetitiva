def main():
	print(nb_year(1000, 2.0, 50, 1214))


def nb_year(p0,percent,aug,p):
    anhios=0
    percent/=100.0
    while p0 < p:
	    p0+=int(p0*percent)
	    p0+=aug
	    anhios+=1

    print(p0,p)
    return anhios

main()
