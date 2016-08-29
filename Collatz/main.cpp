#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

void main()
{
	unsigned int var;
	printf("\nayy lmao bruh\n");
	scanf_s("%d", &var);
	getchar();
	printf("\nohhhh man that's a good one\n");
	printf("\nhere hold on lemme..\nwait\nwait i got this\nthere check this out\n");
	printf("%d", var);
	while (var > 1)
	{
		if (var % 2 == 0)
		{
			var = var / 2;
		}
		else
		{
			var = (3 * var + 1);
		}
		printf(" %d ", var);
	}
	system("pause");
}