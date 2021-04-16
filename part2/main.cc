#include <chrono>
#include <iostream>
#include "string.h"
#include <stack>


bool IsPalindrome(const std::string &input){

    std::stack<int> s;
    return false;
}

int main(int argc, char** argv)
{
    char* input = argv[1];
    printf("input lenght %ld \n", strlen(input));
    auto time1 = std::chrono::high_resolution_clock::now();
    auto time2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> elapse = time2 - time1;
}