#include <iostream>

using namespace std;

float sal(int,int);

int main(){
  int x,y;
  cin>>x;
  cin>>y;

  cout<<sal(x,y)<<endl;

  return 0;
}

float sal(int a,int b){
  if (a>50){
    return (a-22.5)*b*2;
  }else if(a>40){
    a-=40;
    return(b*a*1.50)+b*40;
  }
  return a*b;
}
