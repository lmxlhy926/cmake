

#include <iostream>
#include <config.h> //生成的配置文件

#ifdef MATHLIB
#include "add.h"
#endif

using namespace std;
int main() {

    cout << "MAX_X: " << MAX_X << endl;
    cout << "MAX_Y: " << MAX_Y << endl;

    int x;

#ifdef MATHLIB
   x = add(1, 2);
#else
   x = 0;
#endif

   cout << "x: " << x << endl;

    return 0;
}
