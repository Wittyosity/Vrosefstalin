#ifndef STALL_H
#define STALL_H
#include <string>
using namespace std;

class stall {
public : 

	stall();

	void setName(string name);
	string getName();

	void setType(string type);
	string getType();

	int getID();

	static int stallID;
	int myID;
	string stallName;
	string stallType;

};
#endif