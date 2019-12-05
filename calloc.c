#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n,i;
	
	printf("enter the size of array: ");
	scanf("%d",&n);
	
	ptr = (int*)calloc(n,sizeof(int));
	
	
	
	if(ptr != NULL)
	{
		printf("membory is allocated\n");
	}
	
	/*printf("enter the values inside array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",ptr++);
	}
	ptr = ptr - n;*/
	
	
	for(i=0; i<n; i++)
	{
		printf("%d\n", *ptr++);
	}
	
	free(ptr);
	return 0;
}
