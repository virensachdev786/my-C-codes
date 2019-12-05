#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char *, char *);
int main()
{
	char ch1[10];
	char ch2[10];
	
	printf("enter first name : ");
	scanf("%s",ch1);
	printf("\nfirst name: %s",ch1);
	
	printf("\nenter last name : ");
	scanf("%s",ch2);
	printf("\nlast name: %s",ch2);
	
	swap(ch1, ch2);
	printf("\noutput entered first name : %s ",ch1);
	printf("\noutput entered last name : %s ",ch2);
	
	
	return 0;
}


void swap(char *ch1, char *ch2)
{
	char *temp;
	//here we have dynamically allocated the membory as were were putting 10 bytes of membory in 1 byte of membory which is not allowed.
	temp = (char *)malloc(10 * sizeof(char));
	
	//Copying the whole string from source to destination
	strcpy(temp, ch1);
	strcpy(ch1, ch2);
	strcpy(ch2, temp);
	
	//deallocating the memory of temp
	free(temp);
}
