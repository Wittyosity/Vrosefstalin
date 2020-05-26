#include "stall.h"
#include "item.h"
#include <string>
#include <vector>
using namespace std;

vector<item*> itemInventory;

int stall::stallID = 0;

stall::stall(){
	stallID++;
	myID = stallID;
	stallName = "?";
	stallType = "??";
}

stall::stall(string name, string type){
	stallID++;
	myID = stallID;
	stallName = name;
	stallType = type;
}

void stall::addItem(item* ptr){
	itemInventory.push_back(ptr);
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

stall::~stall(){
	
}