def main():
    n=int(input("que tan grabde quieres el cuadrito"))
    x=0
    while x<n**2:
        print("* ",end="")
        if (x+1)%n ==0:
            print()
        x+=1   

main()
