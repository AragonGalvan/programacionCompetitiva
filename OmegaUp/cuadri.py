def main():
    n=int(input("que tan grabde quieres el cuadrito"))
    x=0
    while x<n:
        y=0
        while y<n:
            print("* ",end="")
            y+=1
        print()
        x+=1

main()
