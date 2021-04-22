#include <algorithm>
#include <string>
#include <cctype>
#include <chrono>
#include <iostream>
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
    bool correct_queue = false;

    
    auto time1 = std::chrono::high_resolution_clock::now();
    correct_queue = IsPalindromeQueue(input);
    auto time2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> elapse = time2 - time1;
    

    if (correct_queue)
        printf("[queue] %s is a palindrome! \n", input.c_str());
    else
        printf("[queue] %s is not a palindrome! /s \n", input.c_str());

    printf("Operation complete \t time: %f s \n", elapse.count()); 

    return 1;
}