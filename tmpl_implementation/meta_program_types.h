//
// Created by Hrayr Stepanyan on 3/10/25.
//

#ifndef IS_ARRAY_H
#define IS_ARRAY_H

template <typename T>
struct meta_program_types
{
    static const bool value = false;
};

template <typename Q, int N>
struct meta_program_types<Q[N]>
{
    static const bool value = true;
};

template <typename T>
struct is_pointer
{
    static const bool value = false;
};

template <typename T>
struct is_pointer<T*>
{
    static const bool value = true;
};

template <typename A, typename B>
struct is_same
{
    static const bool value = false;
};

template <typename A>
struct is_same<A, A>
{
    static const bool value = true;
};

template <typename T>
struct extent
{
    static const unsigned int value = 0;
};

template <typename T, unsigned int N>
struct extent<T [N]>
{
    static const unsigned int value = N;
};

// template <typename T, int N>


#endif //IS_ARRAY_H
