#include <iostream>
int main()
{
	int varA = 0, varB = 0, varC = 0, varD = 0, varE = 0, varAdded = 0, varAvg = 0;
	printf("Insert five integers\n");
	scanf_s("%d %d %d %d %d", &varA, &varB, &varC, &varD, &varE);
	//getchar();
	printf("Average: %d", ((varA + varB + varC + varD + varE) / 5));
	getchar();
	getchar();
}