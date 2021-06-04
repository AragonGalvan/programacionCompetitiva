#include <iostream>

using namespace std;

class botas{

  protected:
    int velo_a;
    int mana_v;
    int coin_c;

  public:
    int get_v(){return this->velo_a;}
    int get_m(){return this->mana_v;}
    int get_c(){return this->coin_c;}
    void imprimirB();
    botas();
    ~botas(){}


};
void botas::imprimirB(){
cout<<"----- BOTA -----"<<endl<<"aumento en velocidad: "<<velo_a<<endl<<"costo mana p/m: "<<mana_v<<endl<<"costo en tienda: "<<this->coin_c<<endl;
}

botas::botas(){
  this->mana_v=50;
  this->velo_a=50;
  this->coin_c=700;
}

class lava{

  protected:
    int resi_a;
    int vida_c;
    int coin_c;

  public:
    int get_r(){return this->resi_a;}
    int get_v(){return this->vida_c;}
    int get_c(){return this->coin_c;}
    void imprimirL();
    lava();
    lava& operator+(botas&)
    ~lava(){}


};

lava::lava(){
  this->resi_a=50;
  this->vida_c=50;
  this->coin_c=800;
}

void lava::imprimirL(){
  cout<<"----- LAVA ------"<<endl<<"aumento resistencia: "<<this->resi_a<<endl<<"costo vida: "<<this->vida_c<<endl<<"costo tienda: "<<this->coin_c<<endl;
}

class botasDeLava:public botas, public lava{
  public:
  botasDeLava();
  void imprimirBL();
};

botasDeLava::botasDeLava():botas::botas(),lava::lava(){
  this->velo_a=velo_a+50;
  this->resi_a=resi_a+80;
  this->vida_c=vida_c-10;
  this->mana_v=mana_v-15;
  this->botas::coin_c = botas::coin_c + lava::coin_c-200;
}
void botasDeLava::imprimirBL(){
  imprimirB();
}

lava& lava::operator +(botas &b){
  lava r;
  r.velo_a=this->velo_a+50;
  r.mana_c=this->mana_v-10;
  r.resi_a=l.resi_a +70;
  r.vida_c=l.vida_c-10;
  return r;
}

int main(){
  botas b1;
  lava v1;
  botasDeLava bl1=b1+v1;
  b1.imprimirB();
  v1.imprimirL();
  bl1.imprimirBL();

	cout<<"sip"<<endl;

	return 0;
}
