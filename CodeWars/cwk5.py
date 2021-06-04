def alphabet_position(text):
    l1=""
    for letra in text:
        num = ord(letra)
        if num > 64 and num < 91:
            l1 += str(num-64)
            l1+=" "
        elif (num > 96 and num < 123):
            l1 += str(num-96)
            l1+=" " 

    print(l1)       
    
    return l1[:-1]

def main():
    print(alphabet_position("holipiswis humano"))

main()
