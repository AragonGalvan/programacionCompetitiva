class electrodomestico:
    def __init__(self,volts=0,chipset="0000000",volumen=1,encendido=False):
        self._encendido=encendido
        self._volts=volts
        self._chipset=chipset
        self._volumen=volumen

        print("hemos creado un electrodomestico")


    def getVolumen(self):
        a=self._volumen
        return a

    def getChipset(self):
        a=self._chipset
        return a

    def getVolts(self):
        a=self._volts
        return a

    def setVolts(self,a ):
        self._volts=a

    def setChipset(self,a):
        self._chipset=a 

    def setVolumen(self,a):
        self._volumen=a 


    def imprimirElec(self):
        print(self._volts)
        print(self._chipset)
        print(self._volumen)
        print("------ o ------")


    def Encender(self):
        print("tamos encendidos")
        self._encender=True

    def Apagar(self):
        print("noooooooo medes-con-nectaaan.. bghhua")
        self._encender=False


class refrigerador(electrodomestico):
    def __init__(self,tankCap=1,gasTypes="TJL-23"):
        super.__init__()
        self._tankCap=tankCap
        self._gasTypes=gasTypes
        print("ha sido un refri")
    def congelar(self):
        if self._encendidio:
            print("congelando ando")
        else:
            print("CHE humano pendejo")

def main():
    e1=electrodomestico()
    e1.imprimirElec()
    e1.Encender()
    e1.Apagar()
    r1=refrigerador()
    r1.imprimirElec()
    r1.congelar()
    r1.Encender()
    r1.congelar()
    r1.Apagar()
    r1.congelar()


main()
