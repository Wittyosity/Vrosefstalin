#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
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
	//default destructor
	int budget, myBudget;
	string pName, myPname;
	~person();

};
#endif