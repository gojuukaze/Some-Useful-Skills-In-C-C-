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
		printf("1*2>=1*2�� ");
		if( (a*(a+1))>=n*2)
			printf("�� ");
		else
		{
			printf("��");
		}
		printf("\n1/2*2>=1�� ");
		if( a/2*(a+1)>=n)
			printf("�� ");
		else
		{
			printf("��");
		}		

		printf("\n\n");printf("a*b>n*2��a/2*b>n�ѵ�����һ������ι����\n\n\n");
		a=3;
		b=2;
		j=a/2*b;
		printf("3/2*2    =%I64d\n",j);
		j=a/2.0*b;
		printf("3/2.0*2  =%I64d\n",j);
		j=a*b/2;
		printf("3*2/2    =%I64d\n",j);
		printf("\nΪʲôa/2*b��a/2.0*b�Ľ���᲻һ������ι��\n\n\n");

		printf("������ʽ�ı任��2=2.0����֪���㻹��ʲô���ܼ��������ι����\n\n");

//	}
	return 0;
}