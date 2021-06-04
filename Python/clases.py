class casa:

    def __init__(self,nc=3,nv=7,t=100,np=2,l=8,le=0):
        self.num_cuartos=nc
        self.__num_ventana=nv
        self.terreno=t
        self.num_pisos=np
        self.luz=l
        self.l_enc=le
    
    def imprimir(self):
        print("cuartos:",self.num_cuartos)
        print("pisos:",self.num_pisos)
        print("terreno:",self.terreno)
        print("ventanas:",self.__num_ventana)
        print("luces encendidas:",self.l_enc)

    def getNum_ventana(self):
        a = self.__num_ventana
        return a


    def setNum_ventana(self,nv):
        self.__num_ventana=nv

    def luces(self,can):
        if can==0:
            print("no puedes prender 0 luces")
        else:
            if can <= self.luz - self.l_enc and can > 0:
                self.l_enc+=can
            elif can>=-self.l_enc and can < 0:
                self.l_enc+=can
            else:
                print("numero invalido")
def main():
    micasa=casa()
    otracasa=casa(4,7,60,8,2)
    micasa.imprimir()
    print("----- o -----")
    micasa.luces(6)
    micasa.imprimir()
    print("----- o -----")
    micasa.luces(-5)
    micasa.imprimir()
    print("----- o -----")
    otracasa.imprimir()
    otracasa.setNum_ventana(1000)
    print(otracasa.getNum_ventana())



main()
