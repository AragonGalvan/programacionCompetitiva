#include <iostream>

using namespace std;

int main(){
  int sum=0;
  for(int i=3;i<1000;i+=3){

    sum+=i;

  }
  for(int i=5;i<1000;i+=5){
    if(i%3!=0)
      sum+=i;
  }
  cout<<sum<<endl;
  return 0;
}
