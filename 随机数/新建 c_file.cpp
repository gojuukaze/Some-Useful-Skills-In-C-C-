#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;
double random(double start,double end)
{
	return start+(end-start)*rand()/(RAND_MAX+1.0);
}
int main()
{
	freopen("in.txt","w",stdout);
	int a,b,c,d,e,f,h,j,i;
	srand(unsigned(time(0)));

		for(j=0;j<20;j++)
		{
			a=(int)random(1,25);
			b=(int)random(1,25);
			printf("%d %d\n",a,b);
			for(i=0;i<a;i++)
			{
			c=(int)random(1,b+1);
			d=(int)random(1,100);
			printf("%d %d\n",c,d);
			
			}

		

		}
	
	return 0;
}