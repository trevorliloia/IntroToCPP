#include <iostream>
float var, var2;

float LowerOfTwo(float var, float var2)
{
	if (var < var2)
	{
		printf("\n%f", var);
	}
	else if (var2 < var)
	{
		printf("\n%f", var2);
	}
	else
	{
		printf("\nnope");
	}
	return 0;
}
int main()
{
	
	scanf_s("\n %f %f", &var, &var2);
	LowerOfTwo(var, var2);
	system("pause");
}