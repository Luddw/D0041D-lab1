#pragma once
#include <string>
#include <queue>
#include <string>

class CourseQueue
{
private:
    std::string m_name;
    std::queue<std::string> m_students;
public:
    CourseQueue(/* args */) {};
    CourseQueue(const std::string &name) : m_name(name){
        std::queue<std::string> students;
        m_students = students;
    };

    void ApplyToCourse(const std::string &student_name) {
        m_students.push(student_name);
        printf("%s applied to %s \n", student_name.c_str(), m_name.c_str());
    };

    void Print() const {
        std::queue<std::string> temp = m_students;
        printf("%s : ", m_name.c_str());

        while (!temp.empty())
        {
            printf("%s, ", temp.front().c_str());
            temp.pop();
            
        }

        printf("\n");
        
    };

    void RemoveStudent(const std::string &student) {
        std::queue<std::string> temp;
        while (!m_students.empty())
        {
            if (m_students.front() == student) {
                printf("%s removed from %s \n", student.c_str(), m_name.c_str());
                m_students.pop();
                continue;
            }
            
            temp.push(m_students.front());
            m_students.pop();
            
        }
        m_students = temp;


    };

    ~CourseQueue() {
        m_students.empty();
        
    };
};