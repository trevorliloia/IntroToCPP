#include "GameState.h"
#include <cstdio>
#include <cstdlib>


void GameState::init()
{
	zombies[0].init("NULL", "ERROR");
	zombies[1].init("Deadman", "Death Row Inmate");
	zombies[2].init("Big Cat", "Scavver");
	zombies[3].init("Ivan", "Street Fighter");
}

void GameState::start()
{
	printf("The Contestants are:\n");
	drawStatus();
	printf("\nNow kill.\n");
}

void GameState::drawStatus() const
{
	
	for (int i = 0; i < Z_COUNT; ++i)
	{
		zombies[i].draw(false);

	}
}

void GameState::drawRound() const
{
	printf("\n#==# Combat Round #==#\n");
	for (int i = 0; i < Z_COUNT; ++i)
	{
		zombies[i].draw(true);
	}
}

void GameState::update()
{
	for (int i = 0; i < Z_COUNT; ++i)
	{
		if (zombies[i].isAlive())
		{
			zombies[rand() % Z_COUNT].takeDamage(zombies[i].rollAttack());
		}
	}

}

bool GameState::isGameOver() const
{
	int livingzombies = 0;

	for (int i = 0; i < Z_COUNT; ++i)
	{
		if (zombies[i].isAlive())
		{
			livingzombies++;
		}
	}
	return (livingzombies == 1);
}