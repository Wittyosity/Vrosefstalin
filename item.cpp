#include <iostream>
#include "item.h"

using namespace std;

int item::itemID = 0;

item::item()
{
	name="unknown";
	description="unknown";
	price=0;
	itemID++;
	myID=itemID;
}

item::item(string myName, string myDescription, int myPrice)
{
	name=myName;
	description=myDescription;
	price=myPrice;
	itemID++;
	myID=itemID;
}

string item::get_Description()
{
	return description;
}

string item::get_Name()
{
	return name;
}

int item::get_Price()
{
	return price;
}

int item::get_ID()
{
	return myID;
}

item::~item()
{
	
}
