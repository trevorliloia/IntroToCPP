#include <iostream>
#include <time.h>
#include <cstdlib>

#pragma region Variables
int hand;
int computerHand;
bool gameDone = false;
bool won = false;
bool lost = false;
#pragma endregion

void ComputerChoice()
{
	srand(time(0));
	computerHand = rand() % 3 + 0;
}

void DisplayChoice(int hand, int computerHand)
{
	if (hand == 1)
	{
		printf("You picked Stone\n");
	}
	else if (hand == 2)
	{
		printf("You picked Parchment\n");
	}
	else if (hand == 3)
	{
		printf("You picked Blade\n");
	}

	if (computerHand == 1)
	{
		printf("Computer picked Stone\n");
	}
	else if (computerHand == 2)
	{
		printf("Computer picked Parchment\n");
	}
	else if (computerHand == 3)
	{
		printf("Computer picked Blade\n");
	}
}

void Battle(int hand, int computerHand)
{
	if (hand == 1)
	{
		if (computerHand == 1)
		{
			printf("Tied!!\n");
		}
		else if (computerHand == 2)
		{
			printf("Lose!!\n");
			gameDone = true;
		}
		else if (computerHand == 3)
		{
			printf("Win!!\n");
			gameDone = true;
		}
	}
	else if (hand == 2)
	{
		if (computerHand == 1)
		{
			printf("Win!!\n");
			gameDone = true;
		}
		else if (computerHand == 2)
		{
			printf("Tied!!\n");
		}
		else if (computerHand == 3)
		{
			printf("Lose!!\n");
			gameDone = true;
		}
	}
	else if (hand == 3)
	{
		if (computerHand == 1)
		{
			printf("Lose!!\n");
			gameDone = true;
		}
		else if (computerHand == 2)
		{
			printf("Win!!\n");
			gameDone = true;
		}
		else if (computerHand == 3)
		{
			printf("Tied!!\n");
		}
	}
}

int main()
{
	while (gameDone == false)
	{
		printf("Stone, Parchment, or Blade?\n[1]\t[2]\t[3]\n");
		scanf_s(" %d", &hand);
		ComputerChoice();
		DisplayChoice(hand, computerHand);
		Battle(hand, computerHand);
	}
	system("pause");
}