//
// Created by Hrayr Stepanyan on 3/15/25.
//

#ifndef TUPLE_H
#define TUPLE_H

template< typename T>
class tuple
{
};

template< typename T, typename... Args>
class tuple
{
    static_assert(false, "General initialization...");
};

template< typename T, typename... Args>
class tuple<T, Args...>
{
    public:
    typedef T value_type;
};



#endif //TUPLE_H
