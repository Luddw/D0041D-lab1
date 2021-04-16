#pragma once
#include "coursequeue.h"
#include <string>


struct Node
{
    std::string name; 
    CourseQueue course;
    Node* next;
    Node(const std::string &name, const CourseQueue &course){
        this->name = name;
        this->course = course;
        this->next = nullptr;
    }
    Node(): name(""), course(CourseQueue()), next(nullptr){}
};

class List
{
private:
    Node * m_head;
    Node * m_tail;
public:
    List() { 
        m_head = nullptr;
        m_tail = nullptr;
    };

    void Push(std::string name, std::string course_name) {
        Node* node = new Node(name, CourseQueue(course_name));
        printf("course node %s - %s added \n", name.c_str(), course_name.c_str());
        node->next = m_head;
        m_head = node;

    }

    void Delete(const std::string &student, const std::string &course) {
        Node* temp = m_head;
        bool found = false;
        while (temp != NULL)
        {
            if (temp->name == course){
                printf("removing %s ...\n", student.c_str());
                temp->course.RemoveStudent(student);
                found = true;
            }
 
            temp = temp->next;
        }
        if (!found)
            printf("Student %s not found in %s \n", student.c_str(), course.c_str());
    }

    void Print() const {
        Node* temp = m_head;
        while (temp != NULL)
        {
            temp->course.Print();
            temp = temp->next;
        }
    }

    void ApplyToCourse(std::string student, std::string course_name) {
        Node* temp = m_head;
        bool found = false;
        while (temp != NULL)
        {
            if (temp->name == course_name)
            {
                temp->course.ApplyToCourse(student);
                found = true;
                break;
            }
 
            temp = temp->next;
        }
        if (!found)
            printf("Course %s does not exist for %s to apply \n", course_name.c_str(), student.c_str());
    }
    ~List()
    {
        Node* current = m_head;
        Node* next = nullptr;
        while (current != NULL)
        {
            next = current->next;
            delete current;
            current = next;
        }
        printf("clearing DB \n");
        
    };



};

