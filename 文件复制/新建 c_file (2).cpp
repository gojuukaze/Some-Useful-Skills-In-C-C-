/*
CopyFile()
*/

#include <iostream>
#include <windows.h>
#include<string>
using namespace std;
int main()
{
    char * source = "F://程序练习//有用//文件复制//1//1.txt";//源文件
//	char * destination ="F://程序练习//有用//文件复制//2//2.txt";
    string s;//目标文件
	cin>>s;
    CopyFile(source, s.c_str(), FALSE);//false代表覆盖，true不覆盖
    return 0;
}