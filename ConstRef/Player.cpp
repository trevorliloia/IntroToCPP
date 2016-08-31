#include "Player.h"
#include <cstdio>
#include <math.h>
#include <iostream>
#include <ctime>

int statDamage(int attack, int defense)
{
	float ret = (attack - defense) / 8.f;

	if (ret < 0) ret = 0;

	return ret;
}

int combatRound(Player &p1, Player &p2)
{
	p2.vigor -= (p1.magic, p2.might);
	p1.vigor -= statDamage(p2.magic, p1.might);

	p2.vigor -= statDamage(p1.might, p2.grace);
	p1.vigor -= statDamage(p2.might, p1.grace);

	p2.vigor -= statDamage(p1.grace, p2.magic);
	p1.vigor -= statDamage(p2.grace, p1.magic);

	if (p1.vigor < 0 && p2.vigor < 0)
	{
		//return 
	}
}

void printPlayer(const Player &p)
{

}

float randStat(int top, int bot)
{
	srand(time(0));
	return (rand() % top) / (float)(rand() % bot + 1);
}

Player createPlayer()
{
	Player ret;
	printf("insert name ");
	scanf_s("%s", ret.name, 80);
	getchar();

	ret.magic = randStat(300, 5);
	ret.vigor = randStat(300, 5);
	ret.might = randStat(300, 5);
	ret.grace = randStat(300, 5);
}