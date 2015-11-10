/*

x%2^n=X & (2^N - 1)
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	i=j=23477;
	i=i&(32-1);
	j=j%32;
	cout<<i<<" "<<j<<endl;

    return 0;
} 
