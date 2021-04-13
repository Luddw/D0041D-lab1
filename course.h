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
    };

    void ApplyToCourse(const std::string &student_name) {
        m_students.push(student_name);
        printf("%s applied to %s \n", student_name.c_str(), m_name.c_str());
    };

    void Print() const {
        std::stack<std::string> temp = m_students;
        printf("%s : ", m_name.c_str());

        while (!temp.empty())
        {
            printf("%s, ", temp.top().c_str());
            temp.pop();
        }

        printf("\n");
        
    };
    ~Course() {
        m_students.empty();
    };
};