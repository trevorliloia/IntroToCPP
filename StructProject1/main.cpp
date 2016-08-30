#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;




struct Player 
{
	char name[80] = { 0 };
	int health;
	int score;
	float xPos;
	float yPos;
	float velocity;
};

struct Rect
{
	float point1[2]; // contains two floats for x and y
	float point2[2];
	float point3[2];
	float point4[2];
	int RGBval[3];
};

Player createPlayer(Player var)
{
	printf("Input name and score\n");
	scanf_s(" %s %d", var.name, 80, &var.score);
	printf(" %s %d\n", var.name, var.score);
	return Player();
}

void main()
{
	Player player1[5];
	for (int i = 0; i < 5; ++i)
	{
		createPlayer(player1[i]);
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("Name: %s\tScore: %d\n", player1[i].name, player1[i].score);
	}
	char findName[80];
	int nameFound = 2;
	printf("Input name to find\n");
	scanf_s(" %s", findName, 80);

	for (int i = 0; i < 5; ++i)
	{
		if (player1[i].name == findName)
		{
			printf("Name: %s\tScore: %d\n", player1[i].name, player1[i].score);
			nameFound = 1;
		}
		else
		{	
			
		}

	}
	if (nameFound == 2)
	{
		printf("Name not found\n");
	}

	system("pause");
}
