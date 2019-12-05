#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
//	printf("enter a value: ");
//	scanf("%d",&num);

	
	FILE *virennum;
	
/*	virennum = fopen("C:\\Users\\virensachdev786\\Desktop\\DATAC\\virenhandle.txt","w");
	if(virennum == NULL)
	{
		printf("Error opening file");
		exit(1);
	}
	

	printf("DATA BEING WRITTEN");
	fprintf(virennum,"%d",num);
	printf("\nDATA WRITTEN SUCCESSFULLY");
	
	fclose(virennum);*/
	
	virennum = fopen("C:\\Users\\virensachdev786\\Desktop\\DATAC\\virenhandle.txt","r");
	if(virennum == NULL)
	{
		printf("Error opening file");
		exit(1);
	}
	

	printf("DATA BEING read");
	fscanf(virennum,"%d",&num);
	printf("\nDATA read SUCCESSFULLY");
	
	printf("\n%d",num);
	
	fclose(virennum);
	
	
	
	return 0;
}
