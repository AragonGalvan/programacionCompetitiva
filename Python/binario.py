def binString(num,cb=''):
    print("entre",num,cb)
    if (num>0):
        if num%2==0:
            binString(num/2,cb)
            cb=cb+"0"
        else:
            binString((num-1)/2,cb)
            cb+="1"
    
    else:
        return cb;

print(binString(16))
