#include <iostream>
#include <string>
using namespace std;
int main()
{
	//1
	/*if (y == 0)
	{
		x = 100
	}*/
	//2
	int varA = 0, varB = 0, varC;
	printf("Insert two integers\n");
	scanf_s("%d %d", &varA, &varB);
	getchar();
	if (varA > varB)
	{
		printf("%d", varA);
	}
	else if (varA < varB)
	{
		printf("%d", varB);
	}
	else if (varA == varB)
	{
		cout << "pretzels is the same\n";
	}
	

	//4
	/*switch (choice)
	{
	case 1:
		cout << "1";
		break;
	case 2:
	case 3:
		cout << "2 or 3";
		break;
	case 4:
		cout << "4";
		break;
	default:
		cout << "invalid";
		break;

	}*/

	//y = (x == 0) ? 0 : 10 / x;
	system("pause");
}