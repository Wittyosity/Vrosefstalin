#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "stall.h"
#include "item.h"
#include "person.h"
using namespace std;	

void printStall(int numStalls, stall* market){
for(int i=0;i<numStalls;i++){
cout << market[i]->getID() << "\t" << market[i]->getName() << endl;
}

return;
}

