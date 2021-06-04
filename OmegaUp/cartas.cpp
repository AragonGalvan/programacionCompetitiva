#include <iostream>

using namespace std;

int main(){

  int x;
  cin>>x;
  int cont=0;

  bool *a=new bool[x];

  for(int q=0;q<x;q++)
    cin>>a[q];

  for(int f=0;f<x;f+=2){
    if (a[f])
      cont++;
  }

  for(int v=1;v<x;v+=2){
    if(!a[v])
      cont++;
  }

  if (cont > x/2){
    cout<<x-cont<<endl;
  }else{
    cout<<cont<<endl;
  }
  return 0;
}
