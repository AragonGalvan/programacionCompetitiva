#include <iostream>
using namespace std;

void mifun();
float pot(float,int);

int main(){


  if (true)
    mifun();
  return 0;
}

void mifun(){
  int b;
  float a;
  cin>>a;
  cin>>b;

  cout<<pot(a,b)<<endl;
}

float pot(float a, int b){
  if (b==0) return 1;
  return a*pot(a,b-1);
}
