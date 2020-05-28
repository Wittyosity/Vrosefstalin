#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "stall.h"
#include "item.h"
#include "person.h"
using namespace std;

int main(){

	//initialise three stalls
	stall *one, *two, *three;
	item *banana, *apple, *mango;
	banana=new item("banana", "long and yellow", 1);
	apple=new item("apple", "hard and red", 2);
	mango=new item("mango", "tropical", 5);
	one=new stall("Fruits", "food");
	one->addItem(banana);
	one->addItem(apple);
	one->addItem(mango);

	item *chair, *table, *cupboard;
	chair=new item("chair", "to sit on", 40);
	table=new item("table", "to eat off", 70);
	cupboard=new item("shelf", "storage", 100);
	two=new stall("Furniture", "items");
	two->addItem(chair);
	two->addItem(table);
	two->addItem(cupboard);

	item *cat, *dog, *fish;
	cat=new item("cat", "probably wont love you", 100);
	dog=new item("dog", "mans best friend", 100);
	fish=new item("fish", "glub glub", 5);
	three=new stall("Pet store", "animals");
	three->addItem(cat);
	three->addItem(dog);
	three->addItem(fish);

	//generate a person, taking input of name and budget
	person *shopper; 

	string name;
	int budget=0;
	int id;
	int layerCount = 0;
	int itemID=1;
	item* holder;
	

	// cout << one->getID();
	// cout << two->getID();
	// cout << three->getID();

	cout << "Greetings traveller! What is your name?" << endl;
	cin >> name;

	cout << "Welcome " << name << " and how much do you have to spend today?" << endl;
	cin >> budget;
	shopper = new person(name, budget);

	//Purchase loop needs to start

	cout << endl;

while(budget>=0){
	if(layerCount==0) {
		cout << "Here are the stalls we have at the market today: " <<endl;
		cout << "ID:\t" << "Name:" << endl;
		cout << one->getID() << "\t" << one->getName() << endl;
		//one->printList();
		cout << two->getID() << "\t" << two->getName() << endl;
		//two->printList();
		cout << three->getID() << "\t" << three->getName() << endl;
		//three->printList();

		cout << "Please enter the ID of the stall you wish to visit," << endl;
		cout << "or enter 0 if you are finished shopping." << endl;
		// cout << "Enter 1 for the " << one->getName() << " stall, 2 for the " << two->getName() 
		// << " stall, or 3 for the "<< three->getName() <<"."<< endl;
		
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
			
			switch (id) {

				case 0:
					layerCount = layerCount -1;
				break;

				case 1:
				//display stall 1
					cout <<"Welcome to the " << one->getName() << " stall, today we have:" <<endl;
					one->printList();
					layerCount++;
					cout << endl;
				break;

				case 2:
				//display stall 2, enable purchasing from stall
					cout <<"Welcome to the " << two->getName() << " stall, today we have:" <<endl;
					two->printList();					
					layerCount++;
					cout << endl;
				break;

				case 3:
				//display stall 3
					cout <<"Welcome to the " << three->getName() << " stall, today we have:" <<endl;
					three->printList();				
					layerCount++;
					cout << endl;
				break;

				default:
					cout << "Invalid input" << endl;
					layerCount = layerCount -1;
					return 0;
				break;
				}
			}

	else if(layerCount==2){

				//ensure that the function repeats while the person wishes to remain at the same stall
					switch(id) {

						case 0:
							layerCount = layerCount -2;
						break;
									
						case 1:
						//purchase from stall 1
						cout <<"Please enter the ID of the item you wish to purchase," << endl;
						cout << "or enter 0 if you wish to move to another stall." << endl;

						cin >> itemID;

							switch (itemID) {

							case 0:
								layerCount = layerCount -2;
							break;

							case 1:
							//move the item from the stall to the person's 'cart'
								holder = one->getItem(itemID);
								shopper->addItem(holder);
								cout << endl;
								cout << "Your cart currently contains... " << endl;

								shopper->printCart();
								cout << endl;
							break;

							case 2:
								holder = one->getItem(itemID);
								shopper->addItem(holder);
								cout << endl;
								cout << "you have purchased a " << endl;
								shopper->printCart();
								cout << endl;
							break;

							case 3:
								holder = one->getItem(itemID);
								shopper->addItem(holder);
								cout << endl;
								cout << "you have purchased a " << endl;
								shopper->printCart();
								cout << endl;
							break;

							default:
								cout << "invalid input, please input a valid ID" << endl;
								layerCount = layerCount -1;
								cout << endl;
							break;

							}
						}
					}
		if(budget<=0){
		cout << "You are out of money." << endl;
		//print reciept
		}
	}


	//stall test1("testing","more testing");
	/*/cout << test1.getName() << endl;
	test1.setName("ye");
	cout << test1.getType() << endl;
	cout << test1.getName() << endl;
	cout << test1.getID() << endl;/*/

	//stall test1;
	//item* ptr = new item;

	//test1.addItem(ptr);


	return 0;
}