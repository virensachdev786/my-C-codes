#include<stdio.h>
int main()
{
    int i,j,n,q,row=1;
    
    
    printf("enter value for n and q: ");
    scanf("%d",&n);
    scanf("%d",&q);
    int a[n][q];
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("enter value of array a[%d][%d]:", i, j);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(i=0; i<n; i++)
    {
    	printf("row %d: ",i);
    	for(j=0; j<q; j++)
    	{
    		printf("%d\t", a[i][j]);
    	
		}
		printf("\n");
	}
	
	printf("\n");
	
	
	int b[q][n];
	
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<q; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	
       
       
       
    return 0;
}
