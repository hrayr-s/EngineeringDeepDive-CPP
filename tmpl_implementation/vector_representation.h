//
// Created by Hrayr Stepanyan on 3/8/25.
//

#ifndef VECTOR_REPRESENTATION_H
#define VECTOR_REPRESENTATION_H
#include <iostream>
#include <vector>

using namespace std;


template <typename T>
void echo_simple(const T& elem) {
    cout << elem;
}

template <>
inline void echo_simple(const char& elem)
{
    cout << "'" << elem << "'";
}

template <>
inline void echo_simple(const string& elem)
{
    cout << '"' << elem << '"';
}

template <typename KeyTYPE, typename ValueTYPE>
void echo_simple(const pair<KeyTYPE, ValueTYPE>& elem)
{
    cout << "(" << elem.first << ":" << elem.second << ")";
}


template <typename VarType>
void var_dump(std::vector<VarType> variable)
{
    cout << "[";

    for (typename std::vector<VarType>::iterator it = variable.begin();; ++it)
    {
        cout << " ";
        echo_simple(*it);

        if (it == (variable.end() - 1))
        {
            // break on last element here to do not print ','
            break;
        }
        cout << ",";
    }
    cout << " ]" << endl;
}


template <typename VarType>
void var_dump_simple(std::vector<VarType>& variable)
{
    cout << "[";
    char decorator_quotes = '\0';
    if constexpr (std::is_same_v<VarType, char>)
    {
        decorator_quotes = '\'';
    }
    else if constexpr (std::is_same_v<VarType, std::string>)
    {
        decorator_quotes = '"';
    }

    // The following line forced me to use different approach
    // else if constexpr (std::is_same_v<VarType, std::pair<typename KeyType, typename ValType>>)

    for (typename std::vector<VarType>::iterator it = variable.begin(); it != variable.end(); ++it)
    {
        if (decorator_quotes != '\0')
        {
            cout << " " << decorator_quotes << *it << decorator_quotes;
        }
        else
        {
            cout << " " << *it;
        }
        if (it != (variable.end() - 1))
        {
            cout << ",";
        }
    }

    cout << " ]" << std::endl;
}


#endif //VECTOR_REPRESENTATION_H
