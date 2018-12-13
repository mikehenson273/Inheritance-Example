#pragma once
#include "Humanbaseparent.h"
class Warrior :
	public Humanbaseparent
{
public:
	Warrior(); //constructor
	void setName(string newName);
	string getName();
	~Warrior(); //destructor

private:
	string name;
};

