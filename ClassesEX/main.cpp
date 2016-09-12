#include <cstdio>
#include <cstdlib>
#include "Zombie.h"
#include "GameState.h"

void main()
{
	GameState gs;
	gs.init();

	gs.start();
	while (!gs.isGameOver())
	{
		gs.update();
		gs.drawRound();
	}
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	system("pause");
}