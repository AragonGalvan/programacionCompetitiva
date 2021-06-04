#include <iostream>
#include <string>
using namespace std;
struct{
  int edad;
  string nombre;
}persona[10];
int main(){

	cout<<"sip"<<endl;
  for (int a=0;a<10;a++)
    cout<<persona[a].edad<<endl;


	return 0;
}
