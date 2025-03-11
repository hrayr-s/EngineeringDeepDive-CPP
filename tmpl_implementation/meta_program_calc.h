//
// Created by Hrayr Stepanyan on 3/11/25.
//

#ifndef META_PROGRAM_CALC_H
#define META_PROGRAM_CALC_H

template <unsigned long long int A, unsigned N>
struct Pow
{
    static const unsigned long long int value = Pow<A, (N - 1)>::value * A;
};

template <unsigned A>
struct Pow<A, 0>
{
    static const unsigned long long int value = 1;
};

template <long A, long B>
struct Maximal
{
    static const long value = (A > B) * A + (A < B) * B;
};

template <long A, long B, long C>
struct Maximal3
{
    static const long value = Maximal<Maximal<A, B>::value, C>::value;
};

template <long A>
struct ABS
{
    static const long value = Maximal<A, (-1) * A>::value;
};

template <bool cond, long A, long B>
struct EqualHelper
{
    static const bool value = false;
};

template <long A, long B>
struct EqualHelper<true, A, B>
{
    static const bool value = true;
};

template <long A, long B>
struct EqualHelper<false, A, B>
{
    static const bool value = false;
};

template <long A, long B>
struct Equal
{
    static const bool value = EqualHelper<(A == B), A, B>::value;
};

#endif //META_PROGRAM_CALC_H
