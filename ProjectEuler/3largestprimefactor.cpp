#include <iostream>
using namespace std;

bool Primo(long int);

int main()
{
	long int f=0;
	 
	for(long int i=3;600851475143/i>=i;i+=2)
	{
		if(600851475143%i==0)
		{
			//cout<<i<<endl;
			
			//cout<<600851475143/i<<endl;}
			if(Primo(600851475143/i)) cout<<600851475143/i<<endl;
			if(Primo(i)) cout<<i<<endl;
			/*if(600851475143/i>f && Primo(600851475143/i))	
			{
				
				f=600851475143/i;
			}
			if(i>f && Primo(600851475143/i))
			{
				
				f=i;
			}*/
		} 
	}
	cout<<f<<endl;
	return 0;
}
//1 no es primo ni es par
bool Primo(long int a){
	
	if(a==1) return false;
	if(a%2==0 && a!=2) return false;

	for(long int i=3;a/i>=i;i+=2)
	{
		if(a%i==0) return false;	
	}
	return true;
}
// :c
