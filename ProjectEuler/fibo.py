def main():
    cont=0
    n1=0
    n2=1 
    while n2 < 4000000:
        b=n1
        n1=n2
        n2=n1+b
        if n2%2==0:
            print(n2)
            cont+=n2

    print(cont)

main()
