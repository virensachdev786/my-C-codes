#include<stdio.h>
int main()
{
	int a;
	printf("enter a number: ");
	scanf("%d",&a);
	
	if(a <= 0)
	{
		printf("invalid input");
	}
	else if(a % 2  == 0)
	{
		printf("%d is EVEN",a);
	}
	else if(a % 2 != 0)
	{
		printf("%d is ODD",a);
	}

	
	return 0;
}
