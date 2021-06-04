#include <iostream>
#include <cmath>
using namespace std;

int miFuncion(int,char);
int gameWithCells(int,int);

int main(){

  cout<<gameWithCells(1,1)<<endl;
	return 0;
}

int miFuncion(int a,char b){
  for (int j=0;j<a;j++)
    cout<<b;
  cout<<endl;

  return a+b;
}

int gameWithCells(int n, int m){
  if (n%2)
    n++;
  if(m%2)
    m++;
  return (n/2*(m/2)); 
}
