/*
CopyFile()
*/

#include <iostream>
#include <windows.h>
#include<string>
using namespace std;
int main()
{
    char * source = "F://������ϰ//����//�ļ�����//1//1.txt";//Դ�ļ�
//	char * destination ="F://������ϰ//����//�ļ�����//2//2.txt";
    string s;//Ŀ���ļ�
	cin>>s;
    CopyFile(source, s.c_str(), FALSE);//false�����ǣ�true������
    return 0;
}