//
// Created by Hrayr Stepanyan on 3/19/25.
//
#include <iostream>
#include "tmpl_implementation/code_10__ct_sequence.hpp"
#include "tmpl_implementation/code_20__ct_sequence_algorithms.hpp"
#include "tmpl_implementation/code_30__ct_sequence_builder.hpp"

int main()
{
    typedef ct_sequence_6<7, 12, 19, 63, 4>::type s1;
    std::cout << "The first sequence is:";
    ct_printer<s1>::print();

    std::cout << "The second sequence is:";

    return 0;
}
