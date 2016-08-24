#include <iostream>
int main()
{
	bool scream = true;
	char math;
	int varA = 0, varB = 0, varC = 0;
	printf("Insert number representing month\n");
	scanf_s("%d", &varA);
	getchar();
	switch (varA)
	{
	case 1:
		varC = 31;
		break;
	case 2:
		varC = 28;
		break;
	case 3:
		varC = 31;
		break;
	case 4:
		varC = 30;
		break;
	case 5:
		varC = 31;
		break;
	case 6:
		varC = 30;
		break;
	case 7:
		varC = 31;
		break;
	case 8:
		varC = 31;
		break;
	case 9:
		varC = 30;
		break;
	case 10:
		varC = 31;
		break;
	case 11:
		varC = 30;
		break;
	case 12:
		varC = 31;
		break;
	default:
		while (scream)
		{
			printf("HOTDOG\t");
		}
		break;
	}
	printf("%d\n", varC);
	system("pause");
}


//8
/*
a. true
b. false
c. 20
d. true
e. true
f. false
g. true
h. true
i. false
j. true

9
a. true
b. true
c. false
d. true
e. true
*/
