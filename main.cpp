

#include <iostream>
#include <config.h>

using namespace std;

#ifdef MATHLIB
#include "add.h"
#endif

int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << "major: " << aaa << endl;
    cout << "minor: " << bbb << endl;

#ifdef MATHLIB
    cout << "add: " << add(1, 2) << endl;
#endif


    return 0;
}
