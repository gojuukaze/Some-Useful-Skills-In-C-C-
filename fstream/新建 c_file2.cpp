#include<stdlib.h>
#include<fstream>
#include<iostream>
using namespace std;
#define N 100
void show(int a,ofstream& fout)
{
	fout<<a<<endl;
}

	
int main()
{
	cout<<"1"<<endl;
	ofstream fout("½á¹û.txt",ios::app);
	ofstream fo("CON");
	show(3,fout);
	show(4,fo);
	fo.close();
	cout<<"aa\n";
  return 0;
}
