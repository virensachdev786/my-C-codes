#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a 'Cnst'' or a 'Vovel' in small case letters: \n");
	scanf("%c",&ch);
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		printf("%c is 'VOVEL'",ch);
	}
	else if(ch >= 'A' && ch <= 'Z' )
	{
		printf("invalid input");
	}
	else if(ch >= 'b' && ch <= 'z')
	{
		printf("%c is 'CNST'",ch);
	}
	else
	{
		printf("%c is invalid",ch);
	}
	
	
	return 0;
}
