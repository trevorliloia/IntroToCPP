#include <iostream>
int main()
{
	int varA = 0, varB = 0, varC;
	printf("Insert two integers\n");
	scanf_s("%d %d", &varA, &varB);
	getchar();
	printf("A: %d, B: %d \n", varA, varB);

	varC = varA;
	varA = varB;
	varB = varC;

	printf("swap success! \n");
	printf("A: %d, B: %d \n", varA, varB);
	getchar();
}