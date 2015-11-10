#include<fstream>
#include<cstdio>
using namespace std;

int main()
{
	int a=-1;
	ifstream fin("highest.dat");
	fin>>a;
	printf("%d  ",a);
	fin.close();
	ofstream fout("highest.dat");
	fout<<0;
	fout<<" ";
	fout<<0;
	fout<<" ";
	fout.close();
	return 0;
}