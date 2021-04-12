#include "list.h"

int main(int argc, char** argv)
{
    printf("gamer1 \n");

    List list;
    printf("gamer \n");
    std::string name = "MATTE";
    Course kurs(name);
    Node* node = new Node(name, kurs);
    
    list.Push(node);
    list.Print();
    printf("hello benis \n");
    
    return 0;
}