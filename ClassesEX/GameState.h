#pragma once
#include "Zombie.h"

class GameState
{
	const int Z_COUNT = 4;
	Zombie zombies[Z_COUNT];

public:
	void init();
	void start();
	void drawStatus();

};