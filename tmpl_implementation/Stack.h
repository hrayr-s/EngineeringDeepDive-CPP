//
// Created by Hrayr Stepanyan on 3/5/25.
//

#ifndef STACKS_H
#define STACKS_H
#include <csignal>
#include <stdexcept>


template <typename T>
class Stack
{
private:
    T stack[ 200 ];
    size_t _size;
    size_t max_size;

public:
    explicit Stack(size_t N)
    {
        this->max_size = N;
        this->_size = 0;
    }

    void empty()
    {
        this->_size = 0;
    }

    // stack - pop, push, size, empty, top (read/write),
    T pop()
    {
        return this->stack[--this->_size];
    }

    T top() const
    {
        return this->stack[this->_size-1];
    }

    T& top()
    {
        return this->stack[this->_size-1];
    }

    size_t size() const
    {
        return this->_size;
    }
    void push(T value)
    {
        if (this->_size == this->max_size)
        {
            throw std::overflow_error("Stack overflow");
        }
        this->stack[this->_size++] = value;
    }


};


#endif //STACKS_H
