#include "stall.h"
#include "item.h"
#include <string>
#include <vector>
using namespace std;

//vector<item*> itemInventory;

int stall::stallID = 0;

stall::stall(){
	stallID++;
	myID = stallID;
	stallName = "?";
	stallType = "??";
	index=0;
}

stall::stall(string name, string type){
	stallID++;
	myID = stallID;
	stallName = name;
	stallType = type;
	index=0;
}

void stall::addItem(item* ptr){
	itemInventory.push_back(ptr);
	index++;
	//cout << "yep" << endl;
	return;
}

void stall::setName(string name){
	stallName = name;
	return;
}

string stall::getName(){
	return stallName;
}

void stall::setType(string type){
	stallType = type;
	return;
}

string stall::getType(){
	return stallType;
}

int stall::getID(){
	return myID;
}

void stall::printList()
{
	cout << "Name" << "\tPrice" << "\tDescription" << endl;
	for (int i=0;i<index;i++)
	{
		//cout << "yep" << endl;
		cout << itemInventory[i]->get_Name() << "\t" << itemInventory[i]->get_Price() << "\t" << itemInventory[i]->get_Description() << endl;
}

	//std::cout << "myvector stores " << int(itemInventory.size()) << " numbers.\n";

}
stall::~stall(){
	
}