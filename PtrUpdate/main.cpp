#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

struct Dinosaur
{
	char scaryName[80];
	char &nameRef = scaryName[80];
	int anger;
	int &angerRef = anger;
	int teeth;
	int &teethRef = teeth;
};

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

void printasaurusRex(Dinosaur var)
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

void main()
{
	Dinosaur Rex = createasaurusRex();
	printasaurusRex(Rex);
	modifyasaurusRef(Rex);
	printasaurusRex(Rex);
	system("pause");
}