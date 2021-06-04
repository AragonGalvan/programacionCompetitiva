#include <iostream>

using namespace std;

int main(){

  int sum=0;
  int ant=1;
  for(int i=2;i<4000000;i+=ant){
    if(ant%2==0){
      sum+=ant;
    }
    ant+=i;
    
    if(i%2==0){
      sum+=i;
    }
    
  }
  cout<<sum<<endl;
  return 0;
}
