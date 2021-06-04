def main():
    cont=0
    acm=0
    while cont < 1000: 
        acm=acm+cont
        cont = cont+3
    cont=0
    while cont < 1000:
        if cont%3!=0:
            acm+=cont
        cont+=5

    print(acm)

main()
