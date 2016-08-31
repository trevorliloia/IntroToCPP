#pragma once

struct Player
{
	char name[80];
	float magic;
	float vigor;
	float might;
	float grace;
};

int combatRound(Player &p1, Player &p2);

void printPlayer(const Player &p);

Player createPlayer();