/*

	����nλ���ǳ���2��n�η�����������2^n

	����nλ���ǳ���2��n�η����������ж�һ�����Ƿ���2^n  
	

  ��λʱС�ĸı����λ���Ӷ���������
  �磺

  int i = 0x40000000; //16���Ƶ�40000000,Ϊ2���Ƶ�01000000...0000

  ��ʱ���i<<1,����Ϊ��100000...0000������16���Ƶ�0x80000000��

  �����λ����1,����λȫ��0,Ҳ����int���͵���Сֵ��-2147483648

*/

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;

#define LL __int64

int main()
{
	int n;
	unsigned LL base = 0x1;

	
	while(~scanf("%d",&n))
	{
		//	�޷���64λ������Ϊ2^63
		//  �з���64λ������Ϊ2^62
		unsigned LL  power2_n = base << n;

		printf("%I64u\n",power2_n);
	}
	return 0;
}
