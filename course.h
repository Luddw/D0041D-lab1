#pragma once
#include <string>
#include <stack>
#include <string>

class Course
{
private:
    std::string m_name;
    std::stack<std::string> m_students;
public:
    Course(/* args */) {};
    Course(const std::string &name) : m_name(name){
        std::stack<std::string> students;
        m_students = students;
    }
    ~Course() {
        m_students.empty();
    };
};