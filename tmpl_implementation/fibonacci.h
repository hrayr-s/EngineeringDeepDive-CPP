//
// Created by Hrayr Stepanyan on 3/10/25.
//

#ifndef FIBONACCI_H
#define FIBONACCI_H

template< unsigned int N >
struct fibonacci {
    static const unsigned int value = fibonacci< N-1 >::value + fibonacci< N-2 >::value;
};

template<>
struct fibonacci< 0 > {
    static const unsigned int value = 1;
};

template<>
struct fibonacci< 1 >
{
    static const unsigned int value = 1;
};

#endif //FIBONACCI_H
