//
// Created by lhy on 2020/11/18.
//

#include <iostream>
#include <fstream>
#include "table.h"

using namespace std;

int add(int a, int b){
#ifdef TABLE
    cout << "sss" << endl;
#endif

    return a + b;
}