#include<stdio.h>

void board();

char numbers[10] = {'0','1','2','3','4','5','6','7','8','9'};

int main()
{
	int player = 1, i=0, choice;
	
	char mark;
	do
	{
		board();
		player = (player %2) ? 1 : 2;
		printf("\nplayer: %d , enter the value: ",player );
		scanf("%d",&choice );
		mark = (player == 1) ? 'X' : 'O';
		if((choice == 1) && (numbers[1] == '1'))
		{
			numbers[1] = mark;
		}
		
		else if((choice == 2) && (numbers[2] == '2'))
		{
			numbers[2] = mark;
		}
		
		else if((choice == 3) && (numbers[3] == '3'))
		{
			numbers[3] = mark;
		}
		
		else if((choice == 4) && (numbers[4] == '4'))
		{
			numbers[4] = mark;
		}
		
		else if((choice == 5) && (numbers[5] == '5'))
		{
			numbers[5] = mark;
		}
		
		else if((choice == 6) && (numbers[6] == '6'))
		{
			numbers[6] = mark;
		}
		
		else if((choice == 7) && (numbers[7] == '7'))
		{
			numbers[7] = mark;
		}
		
		else if((choice == 8) && (numbers[8] == '8'))
		{
			numbers[8] = mark;
		}
		
		else if((choice == 9) && (numbers[9] == '9'))
		{
			numbers[9] = mark;
		}
		
		i = checkforwin();
		
		player++;
	}while( i == -1 );
	
	board();
	printf("\nplayer %d won\n",--player);
	
	
	return 0;
}


void board() //draw on screen
{
	system("cls");
	printf("\n\n TIC TAC TOE \n");
	printf("\n\nPlayer1: X , Player2: O\n\n\n");
	printf("  %c |  %c |  %c \n", numbers[1], numbers[2], numbers[3]);
	printf("---- ----  ----\n");
	printf("  %c |  %c |  %c \n", numbers[4], numbers[5], numbers[6]);
	printf("---- ----  ----\n");
	printf("  %c |  %c |  %c \n", numbers[7], numbers[8], numbers[9]);
	
}

int checkforwin()
{
	if((numbers[1] == numbers[2]) && (numbers[2] == numbers[3]))
	{
		return 1;
	}
	
		if((numbers[4] == numbers[5]) && (numbers[5] == numbers[6]))
	{
		return 1;
	}
	
		if((numbers[7] == numbers[8]) && (numbers[8] == numbers[9]))
	{
		return 1;
	}
	
		if((numbers[1] == numbers[4]) && (numbers[4] == numbers[7]))
	{
		return 1;
	}
	
		if((numbers[2] == numbers[5]) && (numbers[5] == numbers[8]))
	{
		return 1;
	}
	
		if((numbers[3] == numbers[6]) && (numbers[6] == numbers[9]))
	{
		return 1;
	}
	
		if((numbers[1] == numbers[5]) && (numbers[5] == numbers[9]))
	{
		return 1;
	}
	
	if((numbers[3] == numbers[5]) && (numbers[5] == numbers[7]))
	{
		return 1;
	}
	return -1;
}
