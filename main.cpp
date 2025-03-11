//
// Created by Hrayr Stepanyan on 3/8/25.
//
#include <iostream>
#include <vector>

#include "tmpl_implementation/vector_representation.h"

using namespace std;


int main()
{
    // std::vector<int> v = {11, 23, 45, 89};

    vector<int> v1 {1, 2, 3, 4}; // Direct initialization
    vector<char> v2 = {'5', '6', '7', '8'};
    vector<string> v3 = {"5", "6", "7", "8"};
    vector<pair<string, string>> v4 = {{"Pyotr", "Tchaikovsky"}, {"Alexander", "Pushkin"}, {"Johann", "Bach"}};

    var_dump(v1);
    var_dump(v2);
    var_dump(v3);
    var_dump(v4);

    return 0;
}
