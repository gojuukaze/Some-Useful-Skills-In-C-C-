#include <stdio.h>
#include <direct.h>

int main()
{
	char *buffer;
	//Ҳ���Խ�buffer��Ϊ�������
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