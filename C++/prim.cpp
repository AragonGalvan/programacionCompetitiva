#include <iostream>

using namespace std;
int primeCount(int);
int main()
{
  int a;
  cin>>a;
  int *f=new int[a];
  for(int i=0;i<a;i++)
    cin>>f[i];

  for (int o=0;o<a;o++)

    cout<<primeCount(f[o])<<endl;
  return 0;
}


int primeCount(int n){
  int x=0;
  if (n%2==0)
    x++;
  for (int i=3;i<=n;i+=2){
    if(n%i==0){
      bool b=true;
      for(int j=3;j<i;j+=2){
        if(i%j==0)
          b=false;

      }
      if(b)
        x++;
    }
  }
  return x;
}
