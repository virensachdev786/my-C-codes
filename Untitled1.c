#include<stdio.h>

int main()
{
	int num1, num2, result;
	printf("enter two numbers",num1,num2);
	scanf("%d %d",&num1,&num2);
	
	result = sum(num1,num2);
	printf("%d",result);
	
	return 0;
}
int sum(a, b)
{
	int c;
	c = a + b;
	
	return c;
}
