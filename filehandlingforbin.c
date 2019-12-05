/* in place of txt -> bin
in place of w -> wb or rb


in place of fprintf -> fwrite
in place of fscanf -> fread

fwrite(&num, sizeof(int), num(number) ,pointer);
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	
	printf("enter a number : ");
	scanf("%d",&num);
	
	FILE*virennum;
	
	virennum = fopen("C:\\Users\\virensachdev786\\Desktop\\DATAC\\virenhandle03.txt","rb");
	
	if(virennum == NULL)
	{
		printf("Error opening file");
		exit(1);
	}
	


	fwrite(&num, sizeof(int), 1, virennum);

	n
	printf("\n%d",num);
	
	fclose(virennum);
	
	
	
	return 0;
}


