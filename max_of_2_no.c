#include<stdio.h>
int main()
{
	int num1, num2, num3, max;
	
	printf("enter three numbers: ");
	scanf("%d %d %d",&num1, &num2, &num3);
	
	if(num1 > num2)
	{
		if(num1 > num3)
		{
			printf("max = %d",num1);
		}
		else
		{
			printf("max = %d",num3);
		}
	}
	else
	{
		if (num2 > num3)
		{
			printf("max = %d",num2);
		}
		else
		{
			printf("max = %d",num3);
		}
	}
	return 0;
}
