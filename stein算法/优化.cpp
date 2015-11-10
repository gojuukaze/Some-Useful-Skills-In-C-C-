#include<cstdio>
#include<iostream>
using namespace std;

int gcdcore(int a,int b) {
    if (a==0) return b;
    if (b==0) return a;
    while ((a & 0x1)==0) {
        a=a>>1;
    }
    if (a<b) {
        b=(b-a)>>1;
        return gcdcore(b,a);
    }
    else {
        a=(a-b)>>1;
        return gcdcore(a,b);
    }
}
int gcd(int a,int b) {
    int c=0;
    while (((a & 0x1)==0)&&(( b & 0x1 )==0)) {
        a=a>>1;
        b=b>>1;
        c++;
    }
    if ((a & 0x1) == 0) {
        a=a>>1;
        return gcdcore(a,b)<<c;
    }
    else {
        return gcdcore(b,a)<<c;
    }
}

int main()
{
	cout<<gcd(5,15);
	return 0;
}