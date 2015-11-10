

#include <stdio.h> 
 
void main()  
{  
     char n[22];
char c;
	 //只读取数字、字母、下划线、空格，遇到其他的停止读入，但读取遇到其他之前的部分
     scanf("%[0-9&&a-zA-Z&&_&& ]", n); 
	 scanf("%c",&c); 
	 fflush(stdin);
	 if(c=='\n')
     printf("%s\n", n);
	 else
printf("cuo\n");


}  