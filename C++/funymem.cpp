#include <iostream>

using namespace std;
void miFuncion(int&);
int main(){
  int k=74;
  int &y=k;
	cout<<y<<endl;
  miFuncion(k);
  cout<<k<<endl;

	return 0;
}

void miFuncion(int &a){
  cout<<a<<endl;
  a=50;
  cout<<a<<endl;
}
