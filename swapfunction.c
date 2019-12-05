#include<stdio.h>
void swap1(int a, int b);
void swap2(int *p, int *q);

int main()
{
	
	int a = 1;
	int b = 3;
	
	printf("Values before swap1(): a = %d and b = %d", a, b);
	swap1(a,b);
	printf("\nValues after swap1(): a = %d and b = %d", a, b);
	
	swap2(&a,&b);
	printf("\nValues after swap2(): a = %d and b = %d", a, b);
	
	return 0;
}

void swap1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("\nValue of a in swap1() function = %d",a);
	printf("\nValue of b in swap1() function = %d",b);
}

void swap2(int *p, int *q)
{
	
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	printf("\nValue of a in swap2() function = %d",*p);
	printf("\nValue of b in swap2() function = %d",*q);
}

