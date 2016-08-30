#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

void main()
{
	int var = INT_MAX + INT_MAX;
	float far = var;

	printf("%f\n", far);
	far = *(float*)&var;
	printf("%f\n", far);
	system("pause");
}
















/*
1. STS
2. cool
3. D
4. double is N/A
5.

*/