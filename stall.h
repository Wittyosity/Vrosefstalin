#ifndef STALL_H
#define STALL_H
#include <string>
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

	// states for stall
	static int stallID;
	int myID;
	string stallName;
	string stallType;

	//default destructor
	~stall();

};
#endif