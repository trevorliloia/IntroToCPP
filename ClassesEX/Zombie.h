#pragma once

class Zombie
{
private:
	char name[80], prior[80];

	int baseHealth, baseAttack, critRate, kills, kbnl = (10*level);
	int health, attack;
	int level = 1;

public:
	void init(const char name[], const char occ[]);

	int rollAttack() const;

	void takeDamage(int dmg);

	void draw(bool brief) const;

	bool isAlive() const;
};