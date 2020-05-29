#include <iostream>
#include <string>
#include <vector>
#include "stall.h"
#include "item.h"
#include "person.h"
using namespace std;

extern stall* marketplace(int num);

int main(){

int id=0, budget=0, buy=0;
string name;
stall *market[5];
person *shopper;

for (int i=0;i<5;i++)
{
	market[i]=new stall();
	market[i]=marketplace(i);
}

cout << "Greetings traveller! What is your name?" << endl;
	cin >> name;

cout << "Welcome " << name << " and how much do you have to spend today?" << endl;
cout << "$";
	cin >> budget;

shopper = new person(name, budget);
int myBudget = budget;
int sum = 0;

cout << endl;

int layer = 0;

while(budget>0){
	if(layer==0){

		cout << "Here are the stalls we have at the market today: " <<endl;

		cout << "ID:\t" << "Name:" << endl;

		for (int i=0;i<5;i++)
		{
			//cout << "yes";
			cout << i+1 << "\t" << market[i]->getName() << endl;
		}

		cout << "Please enter the ID of the stall you wish to visit," << endl;
		cout << "or enter 0 if you have finished shopping." << endl;

		cout << endl;
		cout << "Enter ID:";
		cin >> id;
		cout << endl;

		if(id>5){
			cout << "Invalid input, try again" << endl;
			cout << endl;
		}
		else if (id==0){
			cout << "You purchased..." << endl;
			cout << endl;
			cout << shopper->checkout() << endl;
			cout << "Thanks for coming to the market today :)" << endl;
			return 0;
		}
		else{
			layer++;
		}

	}	
	else if(layer==1){
		cout <<"Welcome to the " <<market[id-1]->getName() << " stall, today we have:" <<endl;
		market[id-1]->printList();
		cout <<"Please enter the ID of the item you wish to purchase," << endl;
		cout << "or enter 0 if you wish to move to another stall." << endl;
		cin >> buy;

		if(buy>3){
			cout << endl;
			cout << "Invalid input, try again" << endl;
			cout << endl;
		}
		else if (buy==0){
			layer = layer - 1;
			cout << endl;
		}
		else if (budget >= (market[id-1]->getItem(buy))->get_Price()){
				budget = myBudget-(market[id-1]->getItem(buy))->get_Price();
				shopper->addItem(market[id-1]->getItem(buy));
				sum = shopper->printCart();
				budget = myBudget - sum;
				cout << "You have $" << budget << endl;
				cout << endl;
		}
		else{
			cout << endl;
			cout << "You can't afford that." << endl;
			cout << endl;
		}
			
	}
}

if(budget<=0){
	cout << "You have exceeded your budget" << endl;
	cout << "You purchased..." << endl;
	cout << endl;
	cout << shopper->checkout() << endl;
	cout << "Thanks for coming to the market today :)" << endl;
}


	return 0;
}