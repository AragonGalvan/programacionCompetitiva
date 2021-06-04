#include <iostream>

using namespace std;
class perrito{
	private:
	int edad;
	int raza;
	int nombre;

	public:
	void correr();
	void ladrar();
	void morder();
	void oler();
  perrito();
  perrito(int,int,int);
  ~perrito(){}
  void comer();
};
void perrito::ladrar(){
  if(this->edad<12)
    cout<<"ladro bien bonito"<<endl;
  else
    cout<<"celulares y carteras"<<endl;
}
perrito::perrito(){
  this->edad=0;
  this->raza=0;
  this->nombre=007;
}
perrito::perrito(int edad, int raza, int nombre){
  this->edad=edad;
  this->raza=raza;
  this->nombre=nombre;
}
int main(){

	perrito p1,p2(2,4,1984),p3(7,8,9);
  p1=p2+p3;
  p1.ladrar();

	return 0;
}
