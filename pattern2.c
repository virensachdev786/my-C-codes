#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=0; i<5; i++)
	{
		printf("\n");
		for(j=0; j<=i; j++)
		{
			printf("*");
		}
	}
	
	for(i=0; i<4; i++)
	{
		printf("\n");
		for(j=4; j>i; j--)
		{
			printf("*");
		}
	}
	
	return 0;
}
