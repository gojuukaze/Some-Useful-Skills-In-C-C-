#include<SDL/SDL.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
	if(SDL_Init(SDL_INIT_EVERYTHING)==-1)
	{
		printf("fales");
		return -1;
	}
	printf("ok\n");
	SDL_Quit();
	return 0;
}