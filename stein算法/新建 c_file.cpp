#include<cstdio>
#include<iostream>
using namespace std;

#define CHECK(a) (!(1&(a))) //�ж��Ƿ�2����
#define CLEAN2(a) while(CHECK(a))a>>=1 //�Ƴ��ǹ����ӵ�2
#define BIGERA if(a<b)(t=a,a=b,b=t) //ȡ�ϴ����Ϊa

int gcd(int a,int b)
{
	int c_2=0,t;
	while((CHECK(a))&&(CHECK(b)))
	{
		a>>=1;b>>=1;c_2++;
	}
	CLEAN2(a);
	CLEAN2(b);
	BIGERA;
	while(a=((a-b)>>1))
	{
		CLEAN2(a);
		BIGERA;
	}
	return b<<c_2;
}

int main()
{
	cout<<gcd(5,15);
	return 0;
}