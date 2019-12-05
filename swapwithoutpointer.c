#include<stdio.h>
int main()
{
	//declare all integers and pointers with a temp integer to store and swap values
	int a = 5;
	int b = 3;
	int *p;
	int *q;
	int temp;
	
	temp = a;
	a = b;
	b = temp;
	
	printf("value of a:%d",a);
	printf("\nvalue of b:%d",b);
	
	p = &a;
	q = &b;
	
	//assign new values in *p and *q
	
	
	temp = *p;
	*p = *q;
	*q = temp;
	
	printf("\nnew value is:%d",a);
	printf("\nnew value is:%d",b);
	
	
	return 0;
}
