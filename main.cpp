#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "stall.h"
#include "item.h"
#include "person.h"
using namespace std;

extern stall* marketplace(int num);
extern printStall(int numStalls, stall* market);

int main(){

int sum = 0;
int numStalls = 5;

stall *market[numStalls];

for (int i=0;i<numStalls;i++){
	market[i]=new stall();
	market[i]=marketplace(i);
}
	
	string name;
	item* holder;
	person* shopper; 
	int id, budget=0, layerCount = 0, itemID=1;
	

	// cout << one->getID();
	// cout << two->getID();
	// cout << three->getID();

	cout << "Greetings traveller! What is your name?" << endl;
	cin >> name;

	cout << "Welcome " << name << " and how much do you have to spend today?" << endl;
	cin >> budget;
	shopper = new person(name, budget);
	cout << endl;

while(budget>=0){
	if(layerCount==0) {
		cout << "Here are the stalls we have at the market today: " <<endl;
		cout << "ID:\t" << "Name:" << endl;

		printStall(numStalls);

		cout << "Please enter the ID of the stall you wish to visit," << endl;
		cout << "or enter 0 if you are finished shopping." << endl;
		
		cin >> id;

		if(id==0){
			cout << endl;
			cout << "You have finished shopping." << endl;
			// Receipt system output.
			return 0;
			}

		layerCount++;
		cout << endl;

		}
	else if(layerCount==1){
			
				cout <<"Welcome to the " << market[id]->getName() << " stall, today we have:" <<endl;
				market[id]->printList();
				layerCount++;
				cout << endl;

		}
	}
}