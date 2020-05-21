#include "stall.h"
#include <string>
using namespace std;

int stall::stallID = 0;

stall::stall(){
	stallName = "?";
	stallType = "??";
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

int main(){
	return 0;
}