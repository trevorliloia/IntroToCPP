#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

float Ax; // x pos a
float Ay; // y pos a
float Ar; // radius a (positive)
float Bx;
float By;
float Br;

int main()
{

	scanf_s(" %f %f %f %f %f %f", &Ax, &Ay, &Ar, &Bx, &By, &Br);

	if ((sqrtf)((Bx - Ax) * (Bx - Ax) + (By - Ay)*(By - Ay)) < (Ar + Br))
	{
		cout << "Circles collided!\n";
	}
	else
		cout << "Circles did not collide!\n";
	
	system("pause");
}