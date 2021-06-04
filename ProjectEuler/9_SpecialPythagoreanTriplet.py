def main():
    cont1=1
    cont2=2
    cuadi=0
    while cont1<1000:
        cont2=2
        while cont2 < cont1:
            cuadi=(cont1**2+cont2**2)**(1/2)
            if cuadi == int(cuadi): 
                print(cont1,cont2,(cont1**2+cont2**2)**(1/2),cuadi+cont1+cont2,cuadi*cont1*cont2)
            cont2+=2
        cont1+=2

main()
