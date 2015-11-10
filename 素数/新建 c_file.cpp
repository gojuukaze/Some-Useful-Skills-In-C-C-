#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

#define LL __int64
#define N 10000002
bool f[N];
int biao()
{
	int i,j;
	memset(f,1,sizeof(f));
	f[0]=0;
	f[1]=0;
	//È¥³ýÅ¼Êý
	for(i=4;i<N;i+=2)
	{
		f[i]=0;
	}
	for(i=3;i<N;i+=2)
	{
		for(j=3;j*i<N;j+=2)
		if(f[i*j])
			f[i*j]=0;
	}
	return 0;
}

int main()
{
	int z,t,m,n;
	bool ff;
	biao();
	while(~scanf("%d",&t))
	{
		while(t--)
		{
			ff=1;
			scanf("%d%d",&n,&m);
			for(z=n;z<=m;z+=2)
			{
				if(z<=2 && m>=2)
				{
					printf("2");
					z=3;				
					if(z>m) break;
					else printf(",");
				}

				if(f[z])
				{
					if(ff) ff=0;
					else printf(",");
					printf("%d",z);
				}
			}
			printf("\n");
		}
	}
	return 0;
}