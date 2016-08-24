#include <iostream>
int main()
{
	int varA = 0, varB = 0, varC = 0, varD = 0, varE = 0, varAdded = 0, varAvg = 0;
	int first, second, third, fourth, fifth;
	printf("Insert five integers\n");
	scanf_s("%d %d %d %d %d", &varA, &varB, &varC, &varD, &varE);
	
	varAdded = varA + varB + varC + varD + varE;

	if (varAdded > 0)//ascending
	{
		
		if ((varA < varB) && (varA < varC) && (varA < varD) && (varA < varE))
		{
			first = varA;
			
		}
		
	}
	else if (varAdded < 0) //descending
	{



	}
	else if (varAdded == 0) //in order added
	{
		printf("%d %d %d %d %d", varA, varB, varC, varD, varE);
	}

	system("pause");
}