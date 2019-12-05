#include<stdio.h>
int main()
{
	int i,j,n,q;
	
	printf("enter value for n and q: ");
	scanf("%d",&n);
	scanf("%d",&q);
	
	
	
	
	
	int a[n][q];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter value of array a[%d][%d]: ", i , j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	int b[n][q];
	printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter value of array b[%d][%d]", i, j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",b[i][j]);
	    }
	    printf("\n");
	}	
	
	
	
	
	
	int c[n][q];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",c[i][j]);
	    }
	    printf("\n");
	}	
	
	return 0;
}
