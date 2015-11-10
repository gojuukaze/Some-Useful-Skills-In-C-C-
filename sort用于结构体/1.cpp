#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;



struct S
{
	char c[20];
	int len;
};
struct cmp
{
	bool operator()(S x,S y)
    {
        return x.len<y.len;
    }
    
};
int main()
{
	int n,mi,i,len,j,x;
	S s[1009];
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			scanf("%d",&mi);
			for(i=0;i<mi;i++)
			{
				scanf("%s",s[i].c);
				s[i].len=strlen(s[i].c);
			}
			sort(s,s+mi,cmp());
			for(i=0;i<mi;i++)
				cout<<s[i].c<<endl;
			
		}
	}

}