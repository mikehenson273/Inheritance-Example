#include "Humanbaseparent.h"
#include "Will name later.h"


Humanbaseparent::Humanbaseparent()
{
}

void Humanbaseparent::talk(string dialog)
{
	cout << dialog << endl;
}
  
void Humanbaseparent::move(string newlocation)
{
	cout << "I am moving to " << newlocation << endl;
}

Humanbaseparent::~Humanbaseparent()
{
}
