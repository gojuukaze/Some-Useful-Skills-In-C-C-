#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	char str[]="hello";
//����1
	string ss1(str);
//����2
	string ss2;
	ss2=str;
//����3
	string ss3;
	ss3.insert(0,str);
	cout<<ss1<<endl<<ss2<<endl<<ss3<<endl;
return 0;
}