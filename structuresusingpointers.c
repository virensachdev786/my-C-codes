#include<stdio.h>
struct student
{
	char name[20];
	int age;
	int weight;
}viren,manish,*ptr1,*ptr2;

int main()
{
	
	ptr1 = &viren;
	ptr2 = &manish;
	
	printf("Enter details for student1");
	printf("\nname: ");
	scanf("%s",viren.name);
	printf("age: ");
	scanf("%d",&viren.age);
	printf("weight: ");
	scanf("%d",&viren.weight);
	
	
	printf("\nEnter detais for student2");
	printf("\nname: ");
	scanf("%s",manish.name);
	printf("age: ");
	scanf("\n%d",&manish.age);
	printf("weight: ");
	scanf("\n%d",&manish.weight);
	
	printf("\nname of student1 : %s\n",ptr1 -> name);
	printf("name of student2 : %s\n",ptr2 -> name);
	
	printf("age of student 1 : %d\n",ptr1 -> age);
	printf("age of student 2 : %d\n",ptr2 -> age);
	
	printf("weight of student 1 : %d\n",ptr1 -> weight);
	printf("weight of student 2 : %d\n",ptr2 -> weight);
	
	
	
	
	
	
	return 0;
	
}
