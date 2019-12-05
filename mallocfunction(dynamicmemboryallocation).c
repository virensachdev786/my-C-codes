/* MALLOC
	ptr = (int *) malloc ( n(enter value by user) * sizeof(int(bydefault))
	(IN THIS MEMBORY WILL BE ALLOCATED DUING THE RUN TIME , WHEREAS SIMPLE MEMBORY ALLOCATION MEMBORY IS ALLOCATED DURING COMPILE TIME)
	*/
	
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n,i;
	
	printf("enter the size of array: ");
	scanf("%d",&n);
	
	ptr = (int*)malloc(n*sizeof(int));
	
	//membory is alocated using malloc
	
	if(ptr != NULL)
	{
		printf("membory is allocated\n");
	}
	
	//enter values for arrays(if not garbage values will be printed)
	
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
