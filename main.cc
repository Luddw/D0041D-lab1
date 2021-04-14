#include "list.h"

int main(int argc, char** argv)
{
    List list;  
 
    std::string name = "MATTE";
    std::string name2 = "POGRAMERING";

    list.Push(name, "M0001");
    list.Push(name2, "D0001");

    list.ApplyToCourse("bert", "MATTE");
    list.ApplyToCourse("greger", "MATTE");
    list.ApplyToCourse("adolf", "MATTE");
    list.ApplyToCourse("adolf1", "MATTE");
    list.ApplyToCourse("adolf2", "MATTE");
    list.ApplyToCourse("adolf3", "MATTE");
    list.ApplyToCourse("adolf4", "MATTE");
    list.ApplyToCourse("adolf5", "MATTE");
    list.ApplyToCourse("adolf6", "MATTE");
    list.ApplyToCourse("adolf7", "MATTE");
    list.ApplyToCourse("bert", "POGRAMERING");
    list.ApplyToCourse("per", "MATTE");

    list.Print();
    printf("------------------------------------- \n");
    list.Delete("adolf", "MATTE");
    list.Print();

    return 0;
}