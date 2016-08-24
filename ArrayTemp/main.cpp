#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int var[5];
	scanf_s(" %d %d %d %d %d", &var[0], &var[1], &var[2], &var[3], &var[4]);
	printf(" %d %d %d %d %d", var[4], var[3], var[2], var[1], var[0]);
	system("pause");
}