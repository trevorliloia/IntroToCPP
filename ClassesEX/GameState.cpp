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
}

void GameState::drawStatus() const
{
	printf("The Contestants are:\n");

	for (int i = 0; i < Z_COUNT; ++i)
	{
		zombies[i].draw(false);

	}
}