/*
设要判断的数是无符号整数X。 
首先判断X是否为0，如果为0则不是2的n次幂，返回。
X和X-1进行按位与操作，如果结果是0，则说明这个数是2的n次幂；
如果结果非0，则说明这个数不是2 的n次幂。

证明：
如果是2的n次幂，则此数用二进制表示时只有一位是1，其它都是0。减1后，此位变成0，后面的位变成1，所以按位与后结果是0。
如果不是2的n次幂，则此数用二进制表示时有多位是1。减1后，只有最后一个1变成0，前面的 1还是1，所以按位与后结果不是0。
*/
#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
#define LL __int64

int main()
{
	int a=329;
	if((a&(a-1))==0)
		cout<<"是\n";
	else
		cout<<"bu是\n";


	return 0;
}