//
// Created by Hrayr Stepanyan on 3/10/25.
//
#include <iostream>
#include "tmpl_implementation/meta_program_types.h"

int main()
{
    const int n = 10;
    const int b = 9999;
    int N[40];
    int* i;

    std::cout << meta_program_types<decltype(n)>::value << std::endl;
    std::cout << meta_program_types<decltype(N)>::value << std::endl;
    std::cout << meta_program_types<decltype(i)>::value << std::endl;
    std::cout << is_pointer<decltype(i)>::value << std::endl;
    std::cout << is_same<decltype(n), decltype(N[0])>::value << std::endl;
    std::cout << is_same<decltype(N[1]), decltype(N[0])>::value << std::endl;
    std::cout << is_same<decltype(n), decltype(b)>::value << std::endl;
    std::cout << extent<decltype(N)>::value << std::endl;

    return 0;
}
