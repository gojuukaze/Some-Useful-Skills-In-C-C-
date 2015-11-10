#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
#define N 10000002
int prime_len;
int primes[N];
bool gash[N];
void initPrimes(int n) 
{
    memset(gash , 0 , sizeof(gash));
    prime_len = 0;
    for (int i=2 ; i<=n ; i++) {
        if (!gash[i]) {
            primes[prime_len++] = i;
        }
        for (int j=0 ; j<prime_len && ((i * primes[j]) <= n) ; j++) {
            gash[i * primes[j]] = true;
            if (i % primes[j] == 0) break;
        }
    }
    gash[0]=1;
    gash[1]=1;
    gash[2]=0;
}

int main()
{
    int z,t,m,n;
    bool ff;
    initPrimes(N);
    while(~scanf("%d",&t))
    {
        while(t--)
        {
            ff=1;
            scanf("%d%d",&n,&m);
            for(z=n;z<=m;z+=2)
            {
                if(z<=2 && m>=2)
                {
                    printf("2");
                    z=3;                
                    if(z>m) break;
                    else printf(",");
                }

                if(gash[z]==0)
                {
                    if(ff) ff=0;
                    else printf(",");
                    printf("%d",z);
                }
            }
            printf("\n");
        }
    }
    return 0;
}