/*
	无符号64位结果最大为2^63
	
	有符号64位结果最大为2^62


	2^0 ＝ 1 << 0;
	2^1 =  1 << 1 = 0x2;
	2^2 =  1 << 2 = 0x4;
	2^3 =  1 << 3 = 0x8;
	2^4 =  1 << 4 = 0x10;
	2^5 =  1 << 5 = 0x20;

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
		//	无符号64位结果最大为2^63
		//  有符号64位结果最大为2^62
		unsigned LL  power2_n = base << n;

		printf("%I64u\n",power2_n);
	}
	return 0;
}
