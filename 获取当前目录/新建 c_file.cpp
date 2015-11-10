#include <stdio.h>
#include <direct.h>

int main()
{
	char *buffer;
	//也可以将buffer作为输出参数
	if((buffer = getcwd(NULL, 0)) == NULL)
	{
		perror("getcwd error");
	}
	else
	{
        printf("%s\n", buffer);
		free(buffer);
	}
}