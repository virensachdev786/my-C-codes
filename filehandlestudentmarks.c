#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *virennum;
	
	char name[50];
	int marks, i, num;
	
	printf("Enter the number of students: ");
	scanf("%d",&num);
	virennum = fopen("C:\\Users\\virensachdev786\\Desktop\\DATAC\\studentsmarks.txt","w");
		
		
	if(virennum == NULL)
	{
		printf("Error opening file");
		exit(1);
	}
		
	
	for(i=1; i<=num; i++)
	{
		//fseek(stdin, 0, SEEK_END); //Putting the pointer at begning of the buffer
		fflush(stdin); // Clearing the buffer
		
		printf("Enter the name of the stduent %d : ",i);
		gets(name);
		
		printf("Enter marks of the student: ");
		scanf("%d",&marks);
	
	
		
	
		printf("DATA BEING WRITTEN\n");
		fprintf(virennum,"%s, %d" , name, marks);
		printf("DATA WRITTEN SUCCESSFULLY\n");
		
	}

	fclose(virennum);

	return 0;
	
}
