#include <iostream>  
#include <stdio.h> 
using namespace std; 

int main() 
{ 
    int i; 
    char j; 
    for(i = 0;i < 10;i++) 
    { 
        scanf("%c",&j);/*����%ǰû�пո�,/nҲ�������ȥ��*/ 
    } 
	for(i = 0;i < 10;i++) 
    { 
        scanf(" %c",&j);/*����%ǰ�пո�/nû�������ȥ��*/ 
    } 
	return 0;
}