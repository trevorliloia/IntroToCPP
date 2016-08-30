#include <iostream>
float var;

float HalfOf(float var)
{
	var = var / 2;
}
int main()
{

	scanf_s("\n %f", &var);
	HalfOf(var);
	printf("%d", var);
	system("pause");
}