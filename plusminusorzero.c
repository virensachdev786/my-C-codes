#include<stdio.h>
int main()
{
	int a;
	printf("enter a number: ");
	scanf("%d",&a);
	
	if(a < 0)
	{
		printf("%d is negative",a);
	}
		
	else if(a>=1)
	{
		printf("%d is positive",a);
	}
	else if(a == 0)
	{
		printf("%d is zero",a);
	}
	
	
	return 0;
}
