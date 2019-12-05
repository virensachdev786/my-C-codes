#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	FILE *virennum;
	
	virennum = fopen(__FILE__,"r");
	if(virennum == NULL)
	{
		printf("Error opening file");
		exit(1);
	}

	char C;
	do{
		
		C = fgetc(virennum);
		
		printf("%c",C);
		
		} while( C != EOF);

		
	
	fclose(virennum);
	
	
	return 0;
}
