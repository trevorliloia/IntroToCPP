#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
using namespace std;

void NotUnderstood()
{
	cout << "I'm sorry, I don't understand. \nI am still in development stages,\nand it's hard to learn new words.\n";
}

int main()
{
	bool understood = false;
	int option;
	int answer1num;
	string answer1;
	string name;
	char menuitem;
	cout << "Please use lowercase and simple words/concepts when talking to Chatterbox!\n\n";
	cout << "\nHi! I'm Chatterbox!\n";
	
	while(understood == false)
	{
		cin >> answer1;
		if (answer1 == "hi" || answer1 == "hello")
		{
			understood = true;
		}
		else
		{
			NotUnderstood();
		}
	}
	understood = false;
	cout << "\nWhat is your name?\n";
	cin >> name;

	cout << "\nHi " + name + ", how are you today?.\n";

	while (understood == false)
	{
		cin >> answer1;
		if (answer1 == "good" || answer1 == "great" || answer1 == "awesome" || answer1 == "super" || answer1 == "dandy" || answer1 == "wonderful" || answer1 == "spectacular")
		{
			option = 1;
			understood == true;
		}
		else if (answer1 == "okay" || answer1 == "fine" || answer1 == "alright")
		{
			option = 2;
			understood == true;
		}
		else if (answer1 == "bad" || answer1 == "not good" || answer1 == "terrible" || answer1 == "horrible" || answer1 == "frustrated" || answer1 == "mad")
		{
			option = 3;
			understood == true;
		}
		else if (answer1 == "no how are you" || answer1 == "how are you" || answer1 == "no how are you today" || answer1 == "how are you today")
		{
			cout << "No, silly, I'm asking you!";
		}
		else
		{
			NotUnderstood;
		}
	}
	understood = false;

	switch (option)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			break;
	}
	system("pause");
}

