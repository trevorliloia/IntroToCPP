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

int main()
{
	Player player1 = createPlayer(player1);



	system("pause");
}
