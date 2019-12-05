#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//DECLARATION of Function
void swap(char **, char **);

int main()
{	
	char *p = "viren";
	char *q = "sachdev";
	
	printf("first name: %s", p);
	printf("\nlast name : %s", q);

	swap(&p, &q);
	printf("\n\noutput entered first name : %s ",p);
	printf("\noutput entered last name : %s ",q);
	
	int j=0;
	while(p[j] != '\0')
	{
		printf("%c", toupper(p[j]));
		j++;
	}

	
	return 0;
}


//we need to swap the addresses of *P and *q, so that the new swap does not get terminaed in swap function in itself.
void swap(char **p, char **q)
{
	char *temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
	
}
