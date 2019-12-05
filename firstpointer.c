#include<stdio.h>
int main()
{
	int a = 1;
	int *n;
	n = &a;
	
	printf("value of : %d",n);
	printf("\nvalue of : %d",*n);
	
	return 0;
}
