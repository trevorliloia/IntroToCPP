#include <iostream>
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
	cin >> answer1;
	while(understood == false)
	{
		if (answer1 == "hi" || "hello" || "hey")
		{
			understood = true;
		}
		else
		{
			cout << "I'm sorry, I didn't understand that.";
			
		}
	}
	
	cout << "\nWhat is your name?\n";
	cin >> name;
	cout << "\nHi " + name + ", how are you today?.\n";
	cin >> answer1;
	if (answer1 == "good" || "great" || "awesome" || "super")
	{

	}
	else if (answer1 == "okay" || "fine" || "alright")
	{

	}

	system("pause");
}