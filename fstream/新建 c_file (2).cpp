#include<fstream>
#include<ctime>
using namespace std;
int main()
{
	ofstream fout("map.map");
	int a;
	srand(unsigned(time(0)));
	for(int i=0;i<20;i++)
	{
		a=(int)(0+(4-0)*rand()/(RAND_MAX+1.0));
		fout<<0;
		fout<<a;
		fout<<" ";
		fout<<0<<8;
		fout<<" ";
		switch(a)
		{
		case 0:a=4;break;
		case 1:a=5;break;
		case 2:a=6;break;
		case 3:a=7;break;
		}
		fout<<0;
		fout<<a;
		fout<<" ";
		fout<<"\n";
	}
	return 0;
}