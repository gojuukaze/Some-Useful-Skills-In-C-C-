/*
比如用在矩阵快速幂里
int fibo(int n) {
  LL ans[N][N] = {
    {1, 0},
    {0, 1}
  };
  LL x[N][N] = {
    {1, 1},
    {1, 0}
  };
  while(n) {
    if(n&1) {
      mult(x, ans, ans);  // 计算矩阵 x * ans，最后值拷贝到 ans 数组
    }
    mult(x, x, x);
    n>>=1;
  }
  return ans[0][0];
}
*/

#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int m(int a,int b,int &max)
{
	a++;
	if(a<b)
		return m(a,b,max);
	else
		max=max>a?max:a;
}
int main()
{
	//int &_max; 
	int x=1;
	printf("%d  ",x);
	m(3,4,x);	
		printf("%d  ",x);

		return 0;
}