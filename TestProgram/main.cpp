#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <time.h>
using namespace std;
int main()
{
	bool understood = false;
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
			cout << "I'm sorry, I didn't understand that.\n";
		}
	}
	understood = false;
	cout << "\nWhat is your name?\n";
	cin >> name;

	cout << "\nHi " + name + ", how are you today?.\n";

	while (understood == false)
	{
		cin >> answer1;
		if (answer1 == "good" || answer1 == "great" || answer1 == "awesome" || answer1 == "super")
		{

		}
		else if (answer1 == "okay" || answer1 == "fine" || answer1 == "alright")
		{

		}
	}
	
	system("pause");
}