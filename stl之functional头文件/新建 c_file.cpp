#include <stdio.h>
#include <string.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include <queue>
#include <functional>
using namespace std;

int main()
{
	int a[]={12,33,1,55,23,6};
	//用法1
	sort(a,a+6,greater<int>());
	for(int i=0;i<6;i++)
		cout<<a[i]<<" ";

	//用法2
	priority_queue<int,vector<int>,greater<int> > numbers;



  return 0;
}