//C++高精度实现计算程序运行时间
#include <iostream>    
#include <windows.h>    
using namespace std;
#define N 9000000    
   int b[N];
   int a[N];
void Test()//测试程序  
{   

	memcpy(b,a,N);
 //  for(int i=0; i<N; i++)   
   //  {      
	 //  b[i]=a[i];
     //}   
 }   
   
 int main(void)    
 {    
	 
	 for(int i=0;i<N;i++)
		 a[i]=i;
	LARGE_INTEGER BegainTime;    
	LARGE_INTEGER EndTime;    
	LARGE_INTEGER Frequency;    
	QueryPerformanceFrequency(&Frequency);    
	QueryPerformanceCounter(&BegainTime);    
   
     //要测试的代码放在这里   
	Test();   
   
	QueryPerformanceCounter(&EndTime);   
   
     //输出运行时间（单位：s）   
	cout << "运行时间（单位：s）：" <<(double)( EndTime.QuadPart - BegainTime.QuadPart )/ Frequency.QuadPart <<endl;    
   
 //    system("pause") ;    
     return 0 ;    
 }