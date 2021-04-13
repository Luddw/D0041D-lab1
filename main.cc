#include "list.h"

int main(int argc, char** argv)
{
    List list;  
 
    std::string name = "MATTE";
    std::string name2 = "POGRAMERING";   

    list.Push(name, "M0001");
    list.Push(name2, "D0001");

    list.ApplyToCourse("bert", "MATTE");
    list.ApplyToCourse("bert", "POGRAMERING");
    list.ApplyToCourse("per", "MATTE");
    list.Print();
    
    return 0;
}