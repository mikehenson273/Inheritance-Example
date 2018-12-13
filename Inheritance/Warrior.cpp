#include "Will name later.h"
#include "Warrior.h"



Warrior::Warrior()
{
	cout << "A Warrior is born!" << "\n\n" ;
}

void Warrior::setName(string newName)
{
	name = newName;

}
string Warrior::getName()
{
	return name;
}

Warrior::~Warrior()
{
}
