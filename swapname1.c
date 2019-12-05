#include<stdio.h>
#include<string.h>

int main()
{
	char ch1[10];
	char ch2[10];
	char temp[10];
	//char *p;
	//char *q;
	
	
	printf("enter a first name: ");
	scanf("%s",ch1);
	
	printf("enter last name: ");
	scanf("%s",ch2);
	
	strcpy(temp, ch1);
	strcpy(ch1, ch2);
	strcpy(ch2, temp);
	
	
	printf("value of ch1: %s ",ch1);
	printf("value of ch2: %s ",ch2);
	
/*	p = &ch1;
	q = &ch2;
	
	temp = *p;
	*p = *q;
	*q = temp;
	
	printf("last name is : %s",ch1);
	printf("first name is : %s",ch2);*/
	
	return 0;
}
