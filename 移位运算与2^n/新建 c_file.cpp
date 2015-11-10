/*

	左移n位就是乘以2的n次方，可用来求2^n

	右移n位就是除以2的n次方，可用来判断一个数是否是2^n  
	

  移位时小心改变符号位，从而造成溢出。
  如：

  int i = 0x40000000; //16进制的40000000,为2进制的01000000...0000

  这时如果i<<1,则结果为：100000...0000（即：16进制的0x80000000）

  其符号位被置1,其他位全是0,也就是int类型的最小值：-2147483648

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
