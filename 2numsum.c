#include<stdio.h>

//Function Declaration
int sum(int, int);
int sub(int, int);
int mul(int, int);

//Main Driver Program
int main()
{
	int num1, num2, result;
	printf("enter two numbers:",num1,num2);
	scanf("%d %d",&num1,&num2);
	
	result = sum(num1,num2);
	printf("Sum: %d\n",result);
	
	result = sub(num1, num2);
	printf("Subtraction: %d\n",result);
	
	result = mul(num1, num2);
	printf("Multiplication: %d",result);
	
	return 0;
}

//Sum Function
int sum(int a, int b)
{
	int c;
	c = a + b;
	
	return c;
}

int sub(int a, int b)
{
	int d;
	d = a - b;
	
	return d;
	
}

int mul(int a, int b)
{
	int e;
	e = a*b;
	
	return e;
}


