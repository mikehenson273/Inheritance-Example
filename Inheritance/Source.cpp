#include "Will name later.h"
#include "Priestsubchild.h"
#include "Humanbaseparent.h"
#include "Warrior.h"

void main()
{
	// make an object
	//classname objectname

	Priestsubchild Jacob;

	string whoToBless;
	//cout << "Who would you like to bless? ";
	//getline(cin, whoToBless);

	Jacob.talk("Jacob says something Profound...");
	Jacob.move("Cafe...");

	cout << "Who would you like to bless? ";
	getline(cin, whoToBless);

	Jacob.bless(whoToBless);

	Priestsubchild Aaron;
	Aaron.talk("Have a great day!\n");

	cout << "Who would you like to bless? ";
	getline(cin, whoToBless);

	Aaron.bless(whoToBless);

	Warrior Michael;
	Michael.setName("Hulk");

	Warrior Nate;
	Nate.setName("Batman");

	Nate.talk("Batman says, Come on Hulk! Let's get them!\n");

	system("pause");
}