#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
#include "item.h"
using namespace std;

class person {
public:
	//Default constructor
	person();
	//Construstor for set name and budget
	person(string pName, int budget);
	//behaviours to set and return name

	string getName();
	void setName(string pName);

	//behaviours to set and return budget
	void setBudget(int budget);
	int getBudget();

	//Adds item to person
	void addItem(item* ptr);

	//define variables
	int budget, myBudget, sum;
	string pName, myPname;
	
	//track number of items purchased
	int cart_items;

	//define vector for person's use
	vector<item*> personInventory;

	//function to print 
	int printCart();
	string checkout();

	//default destructor
	~person();


};
#endif