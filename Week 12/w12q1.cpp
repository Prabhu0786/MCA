
#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    float marks;

public:
    // Default constructor
    Student()
    {
        roll = 101;
        marks = 85.5;
    }

    // Member function
    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;
    s.display();

    return 0;
}

