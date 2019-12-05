#include<stdio.h>
struct student
{
	char name[20];
	int age;
	int weight;
}viren,manish,sum;

int main()
{
	
	
	
	printf("Enter details for student1");
	printf("\nname: ");
	scanf("%s",viren.name);
	printf("age: ");
	scanf("%d",&viren.age);
	printf("weight: ");
	scanf("%d",&viren.weight);
	
	
	printf("\nEnter detais for student2: ");
	printf("\nname: ");
	scanf("%s",manish.name);
	printf("age: ");
	scanf("\n%d",&manish.age);
	printf("weight: ");
	scanf("\n%d",&manish.weight);
	
	printf("\nname of student1 : %s\n",viren.name);
	printf("name of student2 : %s",manish.name);
	
	sum.age = viren.age + manish.age;
	printf("\nsum of ages of students :  %d = %d + %d",sum.age, viren.age, manish.age);
	
	sum.weight = viren.weight + manish.weight;
	printf("\nsum of weights of students : %d = %d + %d",sum.weight, viren.weight, manish.weight);
	
	return 0;
	
}
