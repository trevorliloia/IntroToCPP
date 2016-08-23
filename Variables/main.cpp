#include <iostream>

//using namespace std;

using std::cin;
using std::cout;

int main()
{
	printf("Let's break it DOWN!");
	float var; //var definition //RAM allocated for integer 'var'
	var = 12.5; //int 'var' assigned as '12.5' which is stored as 12 in the int
	int ivar = var + 4.37;
	printf("\n%f\t%d", var, ivar);
	printf("\n%f", ((2 / 3) + (3 / 5)));
	printf("\n%f", ((2 % 3) + (3 % 5)));
	printf("\n%f", (23 % 15 % -2));
	printf("\n%f", (25 * 1 / 2));
	printf("\n%f", (25 * 1.0 / 2));
	printf("\n%f", (25 * (1 / 2)));
	printf("\n%d", (235 / 8 + 7));
	printf("\n%f", (235 / 8.0 + 7));
	printf("\n%f", (((20 + 1) / 2 - 2.0) / (23 + 3)*0.2));

	int avgHeight;
	int highTax;
	int lowTax;
	int totalGameCost;

	int a = 121;
	float b = 9.4f;
	char c = 'r';
	int d = 100000;
	bool e = false;

	int i = 0;
	float f = 0;
	char ch = 'a';
	scanf_s("%d %c %f", &i, &ch, &f);
	printf("%d %c %f", i, ch, f);


	getchar();
}