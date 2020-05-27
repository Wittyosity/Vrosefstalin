#ifndef STALL_H
#define STALL_H
#include <string>
#include <vector>
#include "item.h"
using namespace std;

class stall {
public : 

	// default constructor
	// and constructor allowing name and type to be set
	stall();
	stall(string name,string type);

	// behavours used to set and return name
	void setName(string name);
	string getName();

	// behavours used to set and return type
	void setType(string type);
	string getType();

	// returns the id of the object
	int getID();

	//Adds item to stall inventory
	void addItem(item* ptr);

	// states for stall


	// mitch added this
	 void printList();
	



	

	static int stallID;
	int myID;
	int* Inventory;
	string stallName;
	string stallType;
	int index;

	//default destructor
	~stall();

};
#endif