#include "stall.h"
#include "item.h"
#include <string>
#include <vector>
using namespace std;

stall* marketplace(int num){
	
stall *cart;
switch(num){
	case 1:
	//stall *cart;
	item *banana, *apple, *mango;
	banana=new item("banana", "long and yellow", 1);
	apple=new item("apple", "hard and red", 2);
	mango=new item("mango", "tropical", 5);
	cart=new stall("Fruits", "food");
	cart->addItem(banana);
	cart->addItem(apple);
	cart->addItem(mango);
	//cout << "ye";
	break;
	case 2:
	//stall *cart;
	item *sausage, *chicken, *bacon;
	sausage=new item("sausage", "long and soft", 2);
	chicken=new item("chicken", "yummy", 3);
	bacon=new item("bacon", "delicious", 4);
	cart=new stall("Butcher", "food");
	cart->addItem(sausage);
	cart->addItem(chicken);
	cart->addItem(bacon);
	break;
	case 3:
	//stall *cart;
	item *broccoli, *sprout, *carrot;
	broccoli=new item("brocoli", "like a small stree", 3);
	sprout=new item("sprout", "gross", 1);
	carrot=new item("carrot", "night vision", 10);
	cart=new stall("Veges", "food");
	cart->addItem(broccoli);
	cart->addItem(sprout);
	cart->addItem(carrot);
	break;
	case 4:
	//stall *cart;
	item *chair, *table, *cupboard;
	chair=new item("chair", "to sit on", 40);
	table=new item("table", "to eat off", 70);
	cupboard=new item("shelf", "storage", 100);
	cart=new stall("Furniture", "items");
	cart->addItem(chair);
	cart->addItem(table);
	cart->addItem(cupboard);
	break;
	case 5:
	//stall *cart;
	item *cat, *dog, *fish;
	cat=new item("cat", "probably wont love you", 100);
	dog=new item("dog", "mans best friend", 100);
	fish=new item("fish", "glub glub", 5);
	cart=new stall("Pet store", "animals");
	cart->addItem(cat);
	cart->addItem(dog);
	cart->addItem(fish);
	break;
}

	return cart;
}
