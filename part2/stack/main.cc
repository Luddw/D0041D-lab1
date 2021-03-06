#include <algorithm>
#include <string>
#include <cctype>
#include <chrono>
#include <iostream>
#include <stack>

bool IsPalindromeStack(std::string &input){
    std::stack<char> stack1;
    std::stack<char> stack2;
    int last_char = input.size() - 1;
    for (size_t i = 0; i < input.size(); i++)
    {
        stack1.push(input[i]);
        stack2.push(input[last_char - i]);
    }

    while (!stack1.empty())
    {
        if (stack1.top() != stack2.top())
            return false;
            
        stack1.pop();
        stack2.pop();
    }

    return true;
}

int main(int argc, char** argv)
{
    bool correct_stack = false;
    std::string input;
    printf("input: ");
    std::getline(std::cin, input);
    std::string original_word = input;
    input.erase(std::remove(input.begin(), input.end(), ' '), input.end());
    for (auto& c : input)
    {
        c = tolower(c);
    }

    

    auto time1 = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < 100000; i++)
    {
        correct_stack = IsPalindromeStack(input);
    }
    auto time2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> elapse = time2 - time1;
    
    
    
    


    if (correct_stack)
        printf("[stack] %s is a palindrome! \n", original_word.c_str());
    else
        printf("[stack] %s is not a palindrome! /s \n", original_word.c_str());

    printf("Operation complete \t time: %f s \n", elapse.count()); 

    return 1;
}