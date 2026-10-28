#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    Student& getStudent() {
        return *this;    
    }

    void display() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(85);

    Student& ref = s1.getStudent();

    ref.display();

    return 0;
}

