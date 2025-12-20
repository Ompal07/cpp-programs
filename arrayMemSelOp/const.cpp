#include <iostream>
#include "Sally.h"
using namespace std;

int main() {
    Sally salObj;
    salObj.printShiz();

    const Sally constSallyObj;
    constSallyObj.printConst();
    return 0;
}