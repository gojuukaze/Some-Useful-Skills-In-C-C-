//生成[start,end)之间的随机数

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

//	freopen("in.txt","r",stdin);
	freopen("in.txt","w",stdout);
	int t,n,a,b,c,i,d,m,j;
	int f;
	srand(unsigned(time(0)));

	f=1000;
	printf("1000\n");
	while(f--)
	{
	
		n=(int)random(1,101);
		m=(int)random(1,101);
		printf("%d %d\n",n,m);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				a=(int)random(0,2);
				printf("%d",a);
			}
			printf("\n");
		
		
		}
		printf("\n");	
	}
	return 0;
}