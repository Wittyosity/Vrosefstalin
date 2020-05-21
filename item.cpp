#include <iostream>
#include "item.h"

using namespace std;


item::item()
{
	name="unknown";
	description="unknown";
	price=0;

}

item::item(string myName, string myDescription, int myPrice)
{
	name=myName;
	description=myDescription;
	price=myPrice;
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

item::~item()
{
	
}
