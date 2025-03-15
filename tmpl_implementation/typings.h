//
// Created by Hrayr Stepanyan on 3/12/25.
//

#ifndef TYPINGS_H
#define TYPINGS_H
template< typename T>
struct Typing
{
    typedef T type;
};

template< typename T>
struct Typing<T*>
{
    typedef T type;
};

template< typename T>
struct add_pointer
{
    typedef T* type;
};

template< typename T>
struct remove_extent
{
    typedef T type;
};

template< typename T, unsigned int N>
struct remove_extent<T[N]>
{
    typedef T type;
};

template< typename T>
struct decay
{
    typedef T type;
};

template< typename T, unsigned int N>
struct decay<T[N]>
{
    typedef typename decay<T>::type type;
};

template< typename T>
struct decay<T&>
{
    typedef typename decay<T>::type type;
};

template< typename T>
struct decay<T*>
{
    typedef typename decay<T>::type type;
};



#endif //TYPINGS_H
