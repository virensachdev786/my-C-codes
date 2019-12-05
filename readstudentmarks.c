#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *virennum;
	
	char name[50];
	int marks, i, num=3;
	
	virennum = fopen("C:\\Users\\virensachdev786\\Desktop\\DATAC\\studentsmarks.txt","r");
		
		
	if(virennum == NULL)
	{
		printf("Error opening file");
		exit(1);
	}

	for(i=1; i<=num; i++)
	{
		fscanf(virennum,"%s", name);
		fscanf(virennum, "%d", &marks);
		printf("%s %d\n",name, marks);
	}

	fclose(virennum);

	return 0;
	
}
