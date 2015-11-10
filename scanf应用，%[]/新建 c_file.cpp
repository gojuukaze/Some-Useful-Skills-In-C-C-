#include <iostream>  
#include <stdio.h> 
using namespace std; 

int main() 
{ 
    int i; 
    char j; 
    for(i = 0;i < 10;i++) 
    { 
        scanf("%c",&j);/*这里%前没有空格,/n也被输入进去了*/ 
    } 
	for(i = 0;i < 10;i++) 
    { 
        scanf(" %c",&j);/*这里%前有空格，/n没被输入进去了*/ 
    } 
	return 0;
}