#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

float Amin; 
float Amax; 
float Bmin; 
float Bmax;

int main()
{

	scanf_s(" %f %f %f %f", &Amin, &Amax, &Bmin, &Bmax);
	printf("%f", (Amax - Bmin));
	

	system("pause");
}