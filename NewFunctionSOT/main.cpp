#include <iostream>
float var, var2, var3;

float LowerOfTwo(float var, float var2, float var3)
{
	if ((var < var2) && (var < var3))
	{
		printf("\n%f", var);
	}
	else if ((var2 < var) && (var2 < var3))
	{
		printf("\n%f", var2);
	}
	else if ((var3 < var) && (var3 < var2))
	{
		printf("\n%f", var3);
	}
	else
	{
		printf("\nnope");
	}
	return 0;
}
int main()
{

	scanf_s("\n %f %f %f", &var, &var2, &var3);
	LowerOfTwo(var, var2, var3);
	system("pause");
}