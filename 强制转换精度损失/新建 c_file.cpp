#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<math.h>
using namespace std;

#define LL __int64

int main()
{
	LL n;
	LL i,j;
	LL a,b;
//	while(~scanf("%I64d",&n))
//	{
		a=1;
		n=1;
		printf("1*2>=1*2吗？ ");
		if( (a*(a+1))>=n*2)
			printf("是 ");
		else
		{
			printf("否");
		}
		printf("\n1/2*2>=1吗？ ");
		if( a/2*(a+1)>=n)
			printf("是 ");
		else
		{
			printf("否");
		}		

		printf("\n\n");printf("a*b>n*2和a/2*b>n难道不是一样的吗，喂！！\n\n\n");
		a=3;
		b=2;
		j=a/2*b;
		printf("3/2*2    =%I64d\n",j);
		j=a/2.0*b;
		printf("3/2.0*2  =%I64d\n",j);
		j=a*b/2;
		printf("3*2/2    =%I64d\n",j);
		printf("\n为什么a/2*b和a/2.0*b的结果会不一样啊，喂！\n\n\n");

		printf("连不等式的变换，2=2.0都不知道你还叫什么智能计算机啊，喂！！\n\n");

//	}
	return 0;
}