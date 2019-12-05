#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int age;
	int weight;
}viren,manish,sum;

int main()
{
	
	
	FILE *virennum;
	
	virennum = fopen("C:\\Users\\virensachdev786\\Desktop\\DATAC\\studentinfo.txt","w");
	
	if(virennum == NULL)
	{
		printf("Error opening file");
		exit(1);
	}
	
	
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
	
	
	printf("DATA BEING WRITTEN\n");
	fprintf(virennum,"%s, %d, %d, %s, %d, %d, %d, %d",viren.name, viren.age, viren.weight, manish.name, manish.age, manish.weight, sum.age, sum.weight);
	printf("\nDATA WRITTEN SUCCESSFULLY\n");
	
	fclose(virennum);
	
	return 0;
	
}
