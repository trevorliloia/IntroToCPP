#pragma once
#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

struct Dinosaur
{
	char scaryName[80];
	int anger;
	int teeth;
};

Dinosaur createasaurusRex();

void printasaurusRex(Dinosaur &var);

Dinosaur modifyasaurusRef(Dinosaur &var);
