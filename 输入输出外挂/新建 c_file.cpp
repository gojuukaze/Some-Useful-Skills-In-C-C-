//int
int Scan()     //输入外挂
{
    int res=0,ch,flag=0;
    if((ch=getchar())=='-')
        flag=1;
    else if(ch>='0'&&ch<='9')
        res=ch-'0';
    while((ch=getchar())>='0'&&ch<='9')
        res=res*10+ch-'0';
    return flag?-res:res;
}
void Out(int a)    //输出外挂
{
    if(a>9)
        Out(a/10);
    putchar(a%10+'0');
}


//char *
void scanf_(int *p)
{
    char in;
    while((in=getchar())>57||in<48);
    *p=in-48;
    while(in=getchar(),in>=48&&in<=57)
    *p*=10,*p+=in-48;
}

/*
使用样例：

scanf_(&a);
*/

//double
int re(double *ret){
    int sgn;
    double bit=0.1;
    char c;
    c=getchar();
    if(c==EOF)return true;
    while(c!='-'&&c!='.'&&(c<'0'||c>'9'))c=getchar();
    sgn=(c=='-')?-1:1;
    *ret=(c=='-')?0:(c-'0');
    while((c=getchar())>='0'&&c<='9')*ret=*ret*10+(c-'0');
    if(c==' '||c=='\n'){*ret*=sgn;return true;}
    while((c=getchar())>='0'&&c<='9')*ret+=(c-'0')*bit,bit/=10;
    *ret*=sgn;
    return false;
}


//bool
inline bool read(int &num) {
        char in;bool IsN=false;
        in=getchar();
        if(in==EOF) return false;
        while(in!='-'&&(in<'0'||in>'9')) in=getchar();
        if(in=='-'){ IsN=true;num=0;} else num=in-'0';
        while(in=getchar(),in>='0'&&in<='9') num*=10,num+=in-'0'; 
        if(IsN) num=-num;
        return true;
}