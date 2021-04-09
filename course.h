#include <string>
#include <stack>
#include <string>

class Course
{
private:
    std::string m_name;
    std::stack<std::string> m_students;
public:
    Course(/* args */);
    ~Course();
};