#include "course.h"
#include <string>


struct Node
{
    std::string name; 
    Course course;
    Node* next;
};

class List
{
private:
    Node * m_head;
    Node * m_tail;
public:
    List(/* args */) { 
        m_head = nullptr;
        m_tail = nullptr;
    };

    void Push(Node *newNode) {
        m_tail->next = newNode;
        newNode->next = nullptr;
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

    ~List() {};



};

