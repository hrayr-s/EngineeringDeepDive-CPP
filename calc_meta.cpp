//
// Created by Hrayr Stepanyan on 3/11/25.
//
#include <iostream>
#include "tmpl_implementation/meta_program_calc.h"

int main()
{
    std::cout << Pow<2, 63>::value << std::endl; // after 2^63 it cannot store the value, so the value is set to 0
    std::cout << Maximal3<128, 390, 256>::value << std::endl;
    std::cout << "|" << ABS<-13>::value << "| = " << ABS<13>::value << std::endl;
    std::cout << "15 == 15 " << Equal<15, 15>::value << ", 24 == 32 " << Equal<24, 32>::value << std::endl;
    return 0;
}
