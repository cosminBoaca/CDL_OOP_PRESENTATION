#include "person.h"
#include <iomanip>
#include <iostream>
using namespace std;

void displayInfo(Person p) {
    p.display();
}

int main() {
    Person p1("Cosmin", 21);
    displayInfo(p1);
    return 0;
}
