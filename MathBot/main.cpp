#include <iostream>
int main()
{
	char math;
	int varA = 0, varB = 0, varC;
	printf("Insert two integers\n");
	scanf_s("%d %d", &varA, &varB);
	printf("Insert math\n");
	scanf_s(" %c", &math, 1);
	getchar();
		switch (math)
		{
		case '+':
			varC = varA + varB;
			break;
		case '-':
			varC = varA - varB;
			break;
		case '*':
			varC = varA * varB;
			break;
		case '/':
			varC = varA / varB;
			break;
		case '%':
			varC = varA % varB;
			break;
		default:
			break;
		}
		printf("%d\n", varC);
	system("pause");
}