//
// Created by Hrayr Stepanyan on 3/17/25.
//


#include <iostream>
#include <list>

#include "tmpl_implementation/double_templ.h"

int main()
{
    // std::cout <<  << std::endl;
    test_container<std::vector>();

	BuildersComparator< SequentialBuilder, ParallelBuilder > cmp1;
	cmp1.compare();

	BuildersComparator< ParallelBuilder, PostponedBuilder > cmp2;
	cmp2.compare();

	BuildersComparator< PostponedBuilder, SequentialBuilder > cmp3;
	cmp3.compare();

    return 0;
}
