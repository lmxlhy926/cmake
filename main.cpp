

#include <iostream>
//#include <config.h>

using namespace std;

#ifdef MATHLIB
#include "add.h"
#endif

int main() {

//    cout << "major: " << aaa << endl;
//    cout << "minor: " << bbb << endl;

#ifdef MATHLIB
   add(1, 2);
#endif

   int a = 2;


    return 0;
}
