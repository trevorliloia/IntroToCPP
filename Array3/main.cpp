#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

int var[5];
int playerval;
int numOfAttacks = 0;
bool notAttack = true;

void Attack()
{
	srand((unsigned)time(0));
	int roll = ((rand() % 50) + 1);
	var[playerval] -= roll;
}
int main()
{
	
	
	var[0] = 100, var[1] = 100, var[2] = 100, var[3] = 100, var[4] = 100;
	while (notAttack)
	{
		printf("Health: %d %d %d %d %d\n", var[0], var[1], var[2], var[3], var[4]);
		printf("\nenter 0-4\n");
		scanf_s(" %d", &playerval);
		if (var[playerval] > 0)
		{
			Attack();
			numOfAttacks++;
		}
		else
		{
			printf("that person is dead. stop hitting them");
		}
		if (numOfAttacks >= 5)
		{
			break;
		}
	}
	printf("Health: %d %d %d %d %d\n", var[0], var[1], var[2], var[3], var[4]);

	system("pause");
}