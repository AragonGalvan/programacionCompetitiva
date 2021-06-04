if __name__ == '__main__':
    n = int(input().strip())

    if n%2==0 and ((n>1 and n<6) or n>20):
        print("Not ",end="")

    print("Weird")
