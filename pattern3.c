#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=0; i<5; i++)
	{ 
	
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}
	
		for(k=1; k<=i; k++)	
		{
			if(k==1)
			{
				printf("*");	
			}
		
			printf(" ");
		}	
		
		for(k=0; k<=i; k++)	
		{
			if(k == i)
			{
				printf("*");
			}
			printf(" ");
		}	
		printf("\n");
	}
	
	
	for(i=0; i<6; i++)
	{ 
		for(j=0; j<=i; j++)
		{
			printf(" ");
		}
		
		for(k=6; k>i; k--)	
		{
			if(k == 6)
			{
				printf("*");
			}
			printf(" ");
		}	
	
		for(k=5; k>i; k--)	
		{
			if(k == i+1)
			{
				printf("*");
			}
			printf(" ");
		}		
		printf("\n");
	}
	
	return 0;
}
	
	
	

	
	
