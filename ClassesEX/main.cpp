#include <cstdio>
#include <cstdlib>
#include "Zombie.h"

void main()
{
	const int Z_COUNT = 4;
	Zombie zombies[Z_COUNT];

	zombies[0].init("NULL","ERROR");
	zombies[1].init("Deadman", "Death Row Inmate");
	zombies[2].init("Big Cat", "Scavver");
	zombies[3].init("Ivan", "Street Fighter");

	printf("The Contestants are:\n");
	for (int i = 0; i < Z_COUNT; ++i)
	{
		zombies[i].draw(false);
		
	}
	printf("\nNow kill.\n");

	bool gameOver = false;
	int livingzombies = 0;
	while (!gameOver)
	{
		for (int i = 0; i < Z_COUNT; ++i)
		{
			if (zombies[i].isAlive())
			{
				zombies[rand() % Z_COUNT].takeDamage(zombies[i].rollAttack());
			}
		}

		for (int i = 0; i < Z_COUNT; ++i)
		{
			zombies[i].draw(true);
		}
		livingzombies = 0;

		for (int i = 0; i < Z_COUNT; ++i)
		{
			if (zombies[i].isAlive())
			{
				livingzombies++;
			}
		}
		gameOver = (livingzombies == 1);
	}
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	system("pause");
}