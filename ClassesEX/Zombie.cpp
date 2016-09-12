#include "Zombie.h"
#include <cstdlib>
#include <cstdio>

int randRange(int min, int max) { return rand() % (max - min) + min; }

void Zombie::init(const char a_name[], const char a_occ[])
{
	sprintf_s(name, "%s", a_name);
	sprintf_s(prior, "%s", a_occ);
	health = randRange(90, 150) + (level*baseHealth);
	attack = randRange(10, 25) + (level*baseAttack);
	critRate = randRange(5, 25);
	kills = 0;
}

void Zombie::draw(bool brief)const
{
	printf("%s the %s\n", name, prior);
	if (!brief)
		printf("HP: %d\nAtk: %d\n", health, attack);
}

bool Zombie::isAlive() const { return health <= 0; }

void Zombie::takeDamage(int dmg) { health -= dmg; }

int Zombie::rollAttack() const { return attack; }