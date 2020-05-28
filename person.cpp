#include <string>
#include <vector>
#include "person.h"
#include "item.h"
using namespace std;



person::person()
{
	myPname="?";
	myBudget = 0;
	cart_items=0;
}

person::person(string pName, int budget)
{
	myPname = pName;
	myBudget = budget;
	cart_items=0;
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

void person::addItem(item* ptr)
{
	cart_items++;
	personInventory.push_back(ptr);
	return;
}

int person::printCart()
{
	sum = 0;
	for(int i=0;i<cart_items;i++){
		cout << personInventory[i]->get_Name() << " worth $" << personInventory[i]->get_Price() << endl;
		sum = sum + personInventory[i]->get_Price();
		
	}
	cout << endl;
	cout << "Totalling... $" << sum << endl;
	return sum;
}

person::~person()
{

}