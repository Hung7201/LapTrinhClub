#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string  str;
	getline(cin,str);
	for(int i=0;i<19;i++)
	{
		if(str[i]==',')
		   str[i]=' ';
	}
	cout<<str;
    return 0;
}
