#include <iostream>
#include <string>
using namespace std;

string acum(string&);

int main(){

	cout<<acum("abc")<<endl;

	return 0;
}

string acum(string &s){
	string a;
	for (int a=0;a<s.length();a++){
		if (s[a]>96)
			a=a+s[a]-32;
		else
		    a=a+s[a];
		for(int b=0; b<a;a++){
			if (s[a]<97)
	            a=a+s[a]+32;
	        else
	            a=a+s[a];
	    }
	    if (a!=s.size()-1)
	    	a=a+"-";

	}
	return a;

}
