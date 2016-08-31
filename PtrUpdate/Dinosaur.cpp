#include "Dinosaur.h"
#include <cstdio>
Dinosaur createasaurusRex()
{
	Dinosaur var;

	printf("Input name\n");
	scanf_s(" %s", var.scaryName, 80);
	printf(" %s\n", var.scaryName);

	printf("Input anger level\n");
	scanf_s(" %d", &var.anger);
	printf(" %d\n", var.anger);

	printf("Input number of teeth\n");
	scanf_s(" %d", &var.teeth);
	printf(" %d\n", var.teeth);

	return var;
}

void printasaurusRex(Dinosaur &var)
{
	printf("Name: %s\t Anger Level: %d\tTeeth: %d\n", var.scaryName, var.anger, var.teeth);
}

Dinosaur modifyasaurusRef(Dinosaur &var)
{
	printf("Input name\n");
	scanf_s(" %s", var.scaryName, 80);
	printf(" %s\n", var.scaryName);

	printf("Input anger level\n");
	scanf_s(" %d", &var.anger);
	printf(" %d\n", var.anger);
	
	printf("Input number of teeth\n");
	scanf_s(" %d", &var.teeth);
	printf(" %d\n", var.teeth);

	return var;
}
