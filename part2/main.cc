#include <algorithm>
#include <string>
#include <cctype>
#include <chrono>
#include <iostream>
#include <stack>

bool IsPalindrome(std::string input){

    std::stack<char> stack1;
    std::stack<char> stack2;
    int last_char = input.size() - 1;

    std::cout << "before : " << input << std::endl;
    std::cout << "after : " << input << std::endl;
    

    for (size_t i = 0; i < input.size(); i++)
    {
        stack1.push(input[i]);
        std::cout << input[last_char - i] << std::endl;
        stack2.push(input[last_char - i]);
    }

    while (!stack1.empty() && !stack2.empty())
    {
        printf("stack 1 | 2 top: %d | %d \n", stack1.top(), stack2.top());
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
    bool correct = IsPalindrome(input);
    //printf("input lenght %ld \n", strlen(input));
    if (correct)
        printf("%s is a palindrome! \n", input.c_str());
    else
        printf("%s is not a palindrome! \n", input.c_str());

    return 1;

}