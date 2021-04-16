#pragma once
#include <string>
#include <stack>
#include <string>

class CourseStack
{
private:
    std::string m_name;
    std::stack<std::string> m_students;
public:
    CourseStack(/* args */) {};
    CourseStack(const std::string &name) : m_name(name){
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

    void RemoveStudent(const std::string &student) {
        std::stack<std::string> temp;
        while (!m_students.empty())
        {
            if (m_students.top() == student) {
                printf("%s removed from %s \n", student.c_str(), m_name.c_str());
                m_students.pop();
                continue;
            }
            
            temp.push(m_students.top());
            m_students.pop();
            
        }
        m_students = temp;


    };

    ~CourseStack() {
        m_students.empty();
        
    };
};