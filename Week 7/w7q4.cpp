#include <iostream>
#include <string>
using namespace std;

class pntr_obj
{
    int roll_no;
    string name;

public:
    void set_data(int r, string n)
    {
        this->roll_no = r;
        this->name = n;
    }

    void print()
    {
        cout << "Object address: " << this << endl;
        cout << "Roll No: " << this->roll_no << endl;
        cout << "Name: " << this->name << endl;
        cout << endl;
    }
};

int main()
{
    pntr_obj obj1, obj2, obj3;

    obj1.set_data(101, "Rahul");
    obj2.set_data(102, "Aman");
    obj3.set_data(103, "Riya");

    cout << "Object 1:" << endl;
    obj1.print();

    cout << "Object 2:" << endl;
    obj2.print();

    cout << "Object 3:" << endl;
    obj3.print();

    return 0;
}

