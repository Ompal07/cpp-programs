#include "People.h"
#include "Birthday.h"

#include <iostream>
using namespace std;

int main() {
    Birthday birthObj (11, 30, 2001);

    People person1("Ompal Singh Bhati", birthObj);

    person1.printInfo();

    return 0;
}