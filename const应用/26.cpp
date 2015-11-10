#include<iostream>
using namespace std;

int main()
{
	const a=1;
	const b=a+a;
	cout<<a<<endl;
	const char* T="abc";
	char* const T2="bcd";
	cout<<T<<endl<<T2<<endl;
	return 0;

}