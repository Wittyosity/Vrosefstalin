#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;


class item
{
public:
	int price;
	string description, name;
	item();  // a default constructor 
// a constructor that takes the item description and the item code number as inputs
	item(string myName, string myDescription, int myPrice);
	string get_Description();  
	sring get_Name();  // returns the item description
	int get_price();       // returns the code number of the item
	~price();     //A default destructor
}; 
#endif //PRICE_H