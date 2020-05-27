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
	apple-new item("apple", "hard and red", 2);
	one=new stall("Fruits", "food");
	one->addItem(banana);
	one->addItem(apple);
	one->printList();







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