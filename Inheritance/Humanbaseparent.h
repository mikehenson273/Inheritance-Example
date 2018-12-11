#pragma once
#include "Will name later.h"

class Humanbaseparent
{
public:
	Humanbaseparent(); //constructor - no return types - always same name as class - runs automatically
	void talk(string dialog);
	void move(string newlocation);

	~Humanbaseparent(); //destructor - clean up
};

