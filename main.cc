#include "list.h"
#include <iostream>
#include <sstream>


enum COMMAND {
    APPLY,
    DELETE,
    ERROR,
    PRINT,
    CLOSE
};
COMMAND GetCommand(const std::string &input)
{

    if (input == "apply")
    {
        return COMMAND::APPLY;
    }
    else if (input == "remove")
    {
        return COMMAND::DELETE;
    }
    else if (input == "print")
    {
        return COMMAND::PRINT;
    }
    else if (input == "close")
    {
        return COMMAND::CLOSE;
    }
    else
        return COMMAND::ERROR; 
}

int main(int argc, char** argv)
{
    bool open = true;
    List list;  
    std::string name = "M0001";
    std::string name2 = "D0001";
    list.Push(name, name);
    list.Push(name2, name2);

    while (open)
    {
        
        std::string input;
        std::getline(std::cin, input);
        std::istringstream stream(input);
        std::string command = input.substr(0, input.find(" "));

        COMMAND usercommand = GetCommand(command);
        switch (usercommand)
        {
        case COMMAND::APPLY:
        {
            list.Print();
            std::cout << "Course: \n";
            std::getline(std::cin, input);
            std::string course = input;
            std::cout << "Student Name: \n";
            std::getline(std::cin, input);
            std::string student = input;
            list.ApplyToCourse(student, course);
            break;
        }

        case COMMAND::DELETE:
        {
            list.Print();
            std::cout << "Course: \n";
            std::getline(std::cin, input);
            std::string course = input;
            std::cout << "Student Name: \n";
            std::getline(std::cin, input);
            std::string student = input;
            list.Delete(student, course);
            break;
        }
        
        case COMMAND::PRINT:
            list.Print();
            break;

        case COMMAND::CLOSE:
            open = false;
            break;

        default:
            break;
        }
    }
    

    return 0;
}