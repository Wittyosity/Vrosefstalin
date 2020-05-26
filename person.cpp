#include <string>
#include <vector>
#include "person.h"
using namespace std;

person::person()
{
	myPname="?";
	myBudget = 0;
}

person::person(string pName, int budget)
{
	myPname = pName;
	myBudget = budget;

}

void person::setName(string pName)
{
	myPname = pName;
	return;
}
string person::getName()
{
	return myPname;
}

void person::setBudget(int budget)
{
	myBudget = budget;
	return;
}

int person::getBudget()
{
	return myBudget;
}

person::~person()
{

}