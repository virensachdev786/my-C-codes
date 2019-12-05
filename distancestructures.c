#include<stdio.h>
struct distances
{
	int feet;
	int inch;
}d1,d2,sum;

int main()
{
	
	
	printf("Enter value for feet 1  : ");
	scanf("%d",&d1.feet);
	
	printf("Enter value for inch 1 : ");
	scanf("%d",&d1.inch);
	
	printf("Enter value for feet 2  : ");
	scanf("%d",&d2.feet);
	
	printf("Enter value for inch 2 : ");
	scanf("%d",&d2.inch);
	
	sum.feet = d1.feet + d2.feet;
	printf("%d = %d + %d", sum.feet, d1.feet, d2.feet);
	
	sum.inch = d1.inch + d2.inch;
	printf("\n%d = %d + %d", sum.inch, d1.inch, d2.inch);
	
	while(sum.inch > 12)
	{
		sum.feet++;
		sum.inch = sum.inch - 12;
	}
	
	printf("\nsolution is %d feet and %d inches",sum.feet, sum.inch);
	
	return 0;
}
