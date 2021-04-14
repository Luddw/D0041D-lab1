#pragma once
#include "course.h"
#include <string>


struct Node
{
    std::string name; 
    Course course;
    Node* next;
    Node(const std::string &name, const Course &course){
        this->name = name;
        this->course = course;
        this->next = nullptr;
    }
    Node(): name(""), course(Course()), next(nullptr){}
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
        Node* node = new Node(name, Course(course_name));
        printf("course node %s - %s added \n", name.c_str(), course_name.c_str());
        node->next = m_head;
        m_head = node;
    }

    void Delete(const std::string &student, const std::string &course) {
        Node* temp = m_head;
        while (temp != NULL)
        {
            if (temp->name == course){
                printf("removing %s ...\n", student.c_str());
                temp->course.RemoveStudent(student);
            }
 
            temp = temp->next;
        }
        
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
        while (temp != NULL)
        {
            if (temp->name == course_name)
                temp->course.ApplyToCourse(student);
 
            temp = temp->next;
        }
        
        
    }
    ~List() {};



};

