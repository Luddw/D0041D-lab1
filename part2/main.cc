#include <algorithm>
#include <string>
#include <cctype>
#include <chrono>
#include <iostream>
#include <stack>
#include <queue>

bool IsPalindromeQueue(std::string input){
    std::queue<char> queue;
    std::queue<char> queue2;

    int last_char = input.size() - 1;

    for (size_t i = 0; i < input.size(); i++)
    {
        queue.push(input[i]);
        queue2.push(input[last_char - i]);
    }

    while (!queue.empty())
    {
        if (queue.front() != queue2.front())
            return false;
        
        queue.pop();
        queue2.pop();
    }

    return true;
}

bool IsPalindromeStack(std::string input){

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
    std::string input;
    printf("input: ");
    std::getline(std::cin, input);
    input.erase(std::remove(input.begin(), input.end(), ' '), input.end());
    for (auto& c : input)
    {
        c = tolower(c);
    }
    bool correct_stack = false;
    bool correct_queue = false;

    
    auto time3 = std::chrono::high_resolution_clock::now();
    correct_queue = IsPalindromeQueue(input);
    auto time4 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> elapse2 = time4 - time3;
    
    auto time1 = std::chrono::high_resolution_clock::now();
    correct_stack = IsPalindromeStack(input);
    auto time2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> elapse1 = time2 - time1;


    //printf("input lenght %ld \n", strlen(input));
    if (correct_stack)
        printf("[stack] %s is a palindrome! \n", input.c_str());
    else
        printf("[stack] %s is not a palindrome! /s \n", input.c_str());

    printf("Operation complete \t time: %f s \n",elapse1.count()); 

    if (correct_queue)
        printf("[queue] %s is a palindrome! \n", input.c_str());
    else
        printf("[queue] %s is not a palindrome! /s \n", input.c_str());

    printf("Operation complete \t time: %f s \n", elapse2.count()); 

    
    if (elapse1.count() > elapse2.count())
        printf("queue is faster!\n");
    else
        printf("stack is faster!\n");


    return 1;

}