

#include <stdio.h> 
 
void main()  
{  
     char n[22];
char c;
	 //ֻ��ȡ���֡���ĸ���»��ߡ��ո�����������ֹͣ���룬����ȡ��������֮ǰ�Ĳ���
     scanf("%[0-9&&a-zA-Z&&_&& ]", n); 
	 scanf("%c",&c); 
	 fflush(stdin);
	 if(c=='\n')
     printf("%s\n", n);
	 else
printf("cuo\n");


}  