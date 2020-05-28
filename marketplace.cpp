#include "stall.h"
#include "item.h"
#include <string>
#include <vector>
using namespace std;

stall* marketplace(int num){
	
stall *cart;
switch(num){
	case 0:
	//stall *cart;
	item *banana, *apple, *mango;
	banana=new item("Banana", "Long and yellow", 1);
	apple=new item("Apple", "Hard and red", 2);
	mango=new item("Mango", "Tropical", 5);
	cart=new stall("Fresh Fruit", "food");
	cart->addItem(banana);
	cart->addItem(apple);
	cart->addItem(mango);
	//cout << "ye";
	break;
	case 1:
	//stall *cart;
	item *sausage, *chicken, *bacon;
	sausage=new item("Sausage", "Long and soft", 2);
	chicken=new item("Chicken", "Yummy", 3);
	bacon=new item("Bacon", "Delicious", 4);
	cart=new stall("Butcher", "food");
	cart->addItem(sausage);
	cart->addItem(chicken);
	cart->addItem(bacon);
	break;
	case 2:
	//stall *cart;
	item *broccoli, *sprout, *carrot;
	broccoli=new item("Brocoli", "Looks like a small tree", 3);
	sprout=new item("Sprout", "Gross", 1);
	carrot=new item("Carrot", "May provide night vision", 10);
	cart=new stall("Grocer", "food");
	cart->addItem(broccoli);
	cart->addItem(sprout);
	cart->addItem(carrot);
	break;
	case 3:
	//stall *cart;
	item *chair, *table, *cupboard;
	chair=new item("Chair", "A place to rest", 40);
	table=new item("Table", "To eat off", 70);
	cupboard=new item("Shelf", "Useful Storage", 100);
	cart=new stall("Furniture", "items");
	cart->addItem(chair);
	cart->addItem(table);
	cart->addItem(cupboard);
	break;
	case 4:
	//stall *cart;
	item *cat, *dog, *fish;
	cat=new item("Cat", "Probably will love you", 100);
	dog=new item("Dog", "Mans best friend", 100);
	fish=new item("Fish", "Glub glub", 5);
	cart=new stall("Pet Store", "animals");
	cart->addItem(cat);
	cart->addItem(dog);
	cart->addItem(fish);
	break;
}

	return cart;
}