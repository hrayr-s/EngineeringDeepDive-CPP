#include <iostream>
#include <stack>

#include "tmpl_implementation/Stack.h"


int main()
{
    std::string command;

    // Stack<std::string> stack_obj = Stack<std::string>(200);

    Stack<int> stack_obj = Stack<int>(200);

    do
    {
        std::cout << " > ";
        std::cin >> command;
        if (command == "+" || command == "add")
        {
            std::cin >> command;
            stack_obj.push(std::stoi(command));
        }
        else if (command == "pop")
        {
            std::cout << stack_obj.pop() << std::endl;
        }
        else if (command == "top")
        {
            std::cout << stack_obj.top() << std::endl;
        }
        else if (command == "clear" || command == "empty")
        {
            stack_obj.empty();
        }
        else if (command == "size")
        {
            std::cout << stack_obj.size() << std::endl;
        }
        else if (command == "&top")
        {
            int& val = stack_obj.top();

            std::cout << val << std::endl;
            std::cin >> command;
            val = std::stoi(command);
        }
        else { std::cout << "+ or add, pop, top, &top, clear or empty" << std::endl; }
    }
    while (command != "exit!");

    std::cout << "Exiting..." << std::endl;


    return 0;
}
