#include <iostream>
int main()
{
	system("color fd");
	char charA, charB, charC;

	//printf("ONE LETTER. ONLY. (NO EXCEPTIONS.)\n");

	scanf_s(" %c %c", &charA, 1, &charB, 1);
	//scanf_s(" %c", &charB, 1);
	int asciiVal = tolower(charA);
	int asciiVal2 = tolower(charB);

int asciiVal3 = ((asciiVal + asciiVal2) / 2);
	charC = asciiVal3;
	printf("average letter is: %c\n", charC);

	/*printf("Insert two letters\n");
	scanf_s("%ch, %ch", &charA, &charB);
	switch (charA)
	{
	case 'a':
		varA = 1;
		break;
	case 'b':
		varA = 2;
		break;


	}*/
	system("pause");
}