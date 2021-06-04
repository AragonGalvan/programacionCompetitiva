#include <iostream>
 
using namespace std;
 class producto
 {
 protected:
     float costo,precio;
 public:
     producto();
     producto(float);
     float get_costo();
     float get_precio();
     float set_precio();
     virtual void imprimir();
     ~producto(){}
 };
 
 class modelo_auto:public producto
 {
 private:
     float consumo;
     int ano;
     int n_puertas;
     float volumen;
 public:
     modelo_auto(float,int,int,float,float,float);
     float get_consumo();
     void imprimir();
     int get_ano();
     int get_n_puertas();
     ~modelo_auto(){}
 };

 modelo_auto::modelo_auto(float consumo,int ano,int n_puertas,float volumen,float costo,float precio):producto(costo)
 {
     cout<<"Creando un carro"<<endl;

     this->consumo=consumo;
     this->ano=ano;
     this->n_puertas=n_puertas;
     this->volumen=volumen;
     this->precio=precio;
 }
 producto::producto()
 {
     cout<<"Creando un producto"<<endl;
 }
 producto::producto(float costo)
 {
     cout<<"Creando un producto"<<endl;
     this->costo=costo;
 }

 void producto::imprimir()
 {
     cout<<"-----PRODUCTO-----"<<endl;
     cout<<this->precio<<endl;
     cout<<this->costo<<endl;

 }
 void modelo_auto::imprimir()
 {
     cout<<"-----VENTA AUTO-----"<<endl;
     cout<<"precio: "<<this->precio<<endl;
     cout<<"Costo: "<<this->costo<<endl;
     cout<<this->consumo<<endl;
     cout<<this->n_puertas<<endl;
     cout<<"Ano: "<<this->ano<<endl;

 }
 
int main(){
    producto p1;
    producto *t1=new modelo_auto(4.5, 2018,4,250.5,56000,340000);
    modelo_auto ma1(2.1,2002,4,200.5,1200,20000);
    p1.imprimir();
    ma1.imprimir();
    t1->imprimir();
    return 0;
}
