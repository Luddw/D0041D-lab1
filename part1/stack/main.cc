#include "list.h"
#include <iostream>
#include <sstream>
#include <chrono>

enum COMMAND {
    APPLY,
    DELETE,
    ERROR,
    PRINT,
    CLOSE
};
COMMAND GetCommand(const std::string& input)
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
            auto time1 = std::chrono::high_resolution_clock::now();
            list.ApplyToCourse(student, course);
            auto time2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<float> elapse = time2 - time1;
            printf("Operation complete \t time: %f s \n", elapse.count());
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
            auto time1 = std::chrono::high_resolution_clock::now();
            list.Delete(student, course);
            auto time2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<float> elapse = time2 - time1;
            printf("Operation complete \t time: %f s \n", elapse.count());
            break;
        }

        case COMMAND::PRINT:
        {
            auto time1 = std::chrono::high_resolution_clock::now();
            list.Print();
            auto time2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<float> elapse = time2 - time1;
            printf("Operation complete \t time: %f s \n", elapse.count());
            break;
        }

        case COMMAND::CLOSE:
            open = false;
            break;

        default:
            break;
        }
    }


    return 0;
}