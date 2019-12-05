/* declare array
n = 5
ptr = (int*)malloc(n*sizeof(int));
scanf
printf

new size 

ptr = realloc (ptr, n * size of (int))
scanf
printf

free(ptr)*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n,i, n1;
	
	printf("enter the size of array: ");
	scanf("%d",&n);
	
	ptr = (int*)malloc(n*sizeof(int));
	
	if(ptr != NULL)
	{
		printf("membory is allocated");
	}
	
	printf("\nenter the values inside array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",ptr++);
	}
	
	
	//we are using this as the array will be printed from the element not the first , hence we are going to first position again so the we can print the array form the first position.
	ptr = ptr - n;
	printf("printed array is as follows:\n");
		for(i=0; i<n; i++)
	{
		printf("%d\n", *ptr++);
	}
	//we need to get the elements at the first place again so that we can allocate the membory which we allocated at the first place using malloc fun.
	ptr = ptr - n;
	
	printf("enter new size of the array: ");
	scanf("%d",&n1);
	
	ptr = (int *)realloc(ptr, n1 * sizeof(int));
	if(ptr != NULL)
	{
		printf(" new membory is allocated");
	}
	
	
	
	printf("\nenter the new values inside array: ");
	for(i=0; i<n1; i++)
	{
		scanf("%d",ptr++);
	}
	ptr = ptr - n1;
	
	
	
	printf("printed new array is as follows:\n");
		for(i=0; i<n1; i++)
	{
		printf("%d\n", *ptr++);
	}
	
	free(ptr);
	
	return 0;
	
}

