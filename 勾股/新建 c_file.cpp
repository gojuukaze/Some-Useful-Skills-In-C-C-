#include<stdio.h>
int main()
{
	int i, j, k;
	i = j = k =0;
	for (i = 5; i < 300; ++i)
	{
		for (j =4; j < i; j++)
		{
			for (k =3; k <=j; k++)
			{
				if ( (k * k+ j * j) == i* i)
				{
					printf("%d, %d, %d\n", i, j, k);
				}
			}
		}
	}
	return 0;
}/*

int main()
{
	int i, j, k;
	i = j = k =0;
	for (i = 1; i < 300; ++i)
	{
		for (j = i; j < 300; ++j)
		{
			for (k = 1; k < 300; ++k)
			{
				if ( (i * i + j * j) == k * k)
				{
					printf("%d, %d, %d\n", i, j, k);
				}
			}
		}
	}
	return 0;
}*/