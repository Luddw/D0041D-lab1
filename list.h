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
        m_head = m_tail;
        m_tail = nullptr;
    };

    void Push(Node *node) {
        m_tail->next = node;
        node->next = nullptr;
    }

    
    void Delete(const std::string &name) {
        Node *temp = m_head;
        while (temp != NULL)
        {
            if (temp->name == name) {
                //stuff
            }

            temp = temp->next;
        }
        
    }

    void Print() const {
        Node *temp = m_head;
        while (temp != NULL)
        {
            printf("%s : \n", temp->name.c_str());
            temp = temp->next;
        }
        
        
    }

    ~List() {};



};

