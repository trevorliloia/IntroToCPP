#include <iostream>
using namespace std;
int main()
{
	for (int i = 100; i >= 0; i--)//0 and 100
	{
		cout << i << endl;
	}

	for (int i = 99; i >= 0; i--)//0 and not 100
	{
		cout << i << endl;
	}

	for (int i = 100; i > 0; i--)//not 0 and include 100
	{
		cout << i << endl;
	}

	for (int i = 100; i >= 0; i-=2)//decrease by two
	{
		cout << i << endl;
	}
	system("pause");
}