//
// Created by Hrayr Stepanyan on 3/10/25.
//
#include <iostream>
#include "tmpl_implementation/fibonacci.h"
using namespace std;

int main()
{
    cout << fibonacci<10000>::value << endl;  // 10K makes recursion limit exception
    return 0;
}
