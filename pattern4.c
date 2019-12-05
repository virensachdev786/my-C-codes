#include<stdio.h>
int main()
{
	int i,j,k;

	for(i=0; i<4; i++)
	{
		printf("\n");
		for(j=0; j<=i; j++)
		{
			printf("*");
		}
		
		for(j=4; j>i; j--)
		{
			printf(" ");
		}
		
		for(j=4; j>i; j--)
		{
			printf(" ");
		}

		for(k=0; k<=i; k++)	
		{
			printf("*");
		}	
//		for(k=5; k>i; k--)	
//		{
//			printf("*");
//		}	
//		//printf("\n");
	}
	
	for(i=0; i<5; i++)
	{
		printf("\n");
		for(j=5; j>i; j--)
		{
			printf("*");
		}
		for(j=0; j<i; j++)
		{
			printf(" ");
		}
		for(j=0; j<i; j++)
		{
			printf(" ");
		}
		
		for(k=5; k>i; k--)	
		{
			printf("*");
		}
	}
	
	
	for(i=0; i<5; i++)
	{ 
		printf("\n");
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}

		
	
	}
	
	

	
	return 0;
}
