//C++�߾���ʵ�ּ����������ʱ��
#include <iostream>    
#include <windows.h>    
using namespace std;
#define N 9000000    
   int b[N];
   int a[N];
void Test()//���Գ���  
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
   
     //Ҫ���ԵĴ����������   
	Test();   
   
	QueryPerformanceCounter(&EndTime);   
   
     //�������ʱ�䣨��λ��s��   
	cout << "����ʱ�䣨��λ��s����" <<(double)( EndTime.QuadPart - BegainTime.QuadPart )/ Frequency.QuadPart <<endl;    
   
 //    system("pause") ;    
     return 0 ;    
 }