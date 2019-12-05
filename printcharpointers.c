#include<stdio.h>
int main()
{
	char ch[10];
	printf("enter a string: ");
	gets(ch);
	
	char *ptr;
	ptr = ch;
	
	//printing 'h' because *ptr is pointing to the base address of ch.
	printf("%c",*ptr);
	
	//This will print the base address of ch as ch always points to base address
	printf("\n%c", ch);
	
	//ptr = address 1
	printf("\n%s\n",ptr);
	
	
	//while loop important as %c reads whole string including terminating sign '\o'
	while(*ptr!= '\0')
	{
		printf("%c",*ptr++);
	}
	
	//&ptr = address 2
	printf("\n%u",&ptr);
	
	//ch = "hello world
	printf("\n%s",ch);
	
	//&ch = add 1
	printf("\n%s",&ch);
	
	return 0;
	
}
