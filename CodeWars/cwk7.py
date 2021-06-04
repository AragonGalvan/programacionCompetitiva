def duplicate_encode(palabra):
    r={}
    res=""
    palabra=list(palabra)
    cont = 0
    while cont < len(palabra):
        if palabra[cont] not in r.keys():
            r.update({palabra[cont]:False})
        else:
            r.update({palabra[cont]:True})

        cont+=1 
    for le in palabra:
        if r[le]:
            res+=')'
        else:
            res+='('
        
    return res

print(duplicate_encode("holipiswis"),"holipiswis")

