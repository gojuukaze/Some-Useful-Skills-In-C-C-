/*
system("copy")

system("xcopy")
*/
#include <iostream>
#include <windows.h>
#include<string>
using namespace std;

int main()
{
	string s="XCOPY SDL\\*.* ";
	string s1="XCOPY Lib\\*.* ";
	string s2;
	cin>>s2;
	s=s+s2+"\\VC98\\Include\\SDL";
	s1=s1+s2+"\\VC98\\Lib";
	s2="md "+s2+"\\VC98\\Include\\SDL";
	cout<<s;
//	system(s2.c_str());
//	system(s.c_str());
//	system(s1.c_str());
	return 0;
}