#include <iostream>
#include <string>
#include <vector>
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
	



	one->printList();
	two->printList();
	three->printList();







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