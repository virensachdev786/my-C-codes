#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	
	if(ch >= 'a' && ch <= 'z')
	{
		printf("%c is small",ch);
	}
	
	else if(ch >= 'A' && ch <= 'Z')
	{
		printf("%c is capital",ch);
	}
	
	else
	{
		printf("invalid input");
	}
	
	return 0;
}
