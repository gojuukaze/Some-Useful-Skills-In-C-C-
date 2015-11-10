#include<stdlib.h>
#include<stdio.h>
int main(void)
{
int number=4;
char string[25];
itoa(number,string,2);
printf("integer=%d ¶ş½øÖÆ=%s\n",number,string);
return 0;
}