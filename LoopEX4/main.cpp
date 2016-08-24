#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	//1
	i = 100;
	while (i >= 0)
	{
		i--;
		cout << i << endl;
	}

	i = 99;
	while (i >= 0)
	{
		i--;
		cout << i << endl;
	}

	i = 100;
	while (i > 0)
	{
		i--;
		cout << i << endl;
	}

	i = 100;
	while (i >= 0)
	{
		i-=2;
		cout << i << endl;
	}

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

	for (int i = 100; i >= 0; i -= 2)//decrease by two
	{
		cout << i << endl;
	}
	system("pause");




//2
	i = 0;
	while (i <= 100)
	{
		++i;
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			cout << "FizzBuzz!\n";
		}
		else if ((i % 3) == 0)
		{
			cout << "Buzz!\n";
		}
		else if ((i % 5) == 0)
		{
			cout << "Fizz!\n";
		}
		else
			cout << i << endl;
	}





	for (int i = 0; i <= 100; ++i)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			cout << "FizzBuzz!\n";
		}
		else if ((i % 3) == 0)
		{
			cout << "Buzz!\n";
		}
		else if ((i % 5) == 0)
		{
			cout << "Fizz!\n";
		}
		else
			cout << i << endl;
	}
	system("pause");



//3

	i = 0;
	int total = 0;
	while (i < 1000)
	{
		++i;
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			total += i;
		}
	}
	cout << total;


	int total = 0;
	for (int i = 0; i < 1000; i++)//
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			total += i;
		}
	}
	cout << total;
	system("pause");
}