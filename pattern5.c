#include<stdio.h>
int main()
{
	int i,j;
	
for(i=0; i<5; i++)
{
	for(j=5; j>i; j--)
	{
		printf("*");
	}
	
	for(j=0; j<i; j++)
	{
		printf(" ");
	}
	
	for(j=1; j<i; j++)
	{
		printf(" ");
	}
		
	for(j=5; j>i; j--)
	{
		printf("*");
	}
		
	printf("\n");
}
	
for(i=0; i<5; i++)
{
	for(j=0; j<=i; j++)
	{
		printf("*");
	}
		
	for(j=4; j>i; j--)
	{
		printf(" ");
	}
		
	for(j=3; j>i; j--)
	{
		printf(" ");
	}
		
	for(j=-1; j<i; j++)
	{
		printf("*");
	}
	printf("\n");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	printf("\n");
	
	
//	//RIGHT SIDE
//	for(i=0; i<5; i++)
//	{
//		for(j=0; j<i; j++)
//		{
//			printf("*");
//		}
//		
//		
//		for(j=5; j>i; j--)
//		{
//			printf("_");
//		}
//		
//		printf("\n");
//	}
//	
//	for(i=0; i<5; i++)
//	{
//	
//		for(j=5; j>i; j--)
//		{
//			printf("@");
//		}
//		
//		for(j=0; j<i; j++)
//		{
//			printf("_");
//		}
//		printf("\n");
//	}
//	
	return 0;
}
