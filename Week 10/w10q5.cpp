
#include <iostream>
using namespace std;

struct DOB
{
    int day;
    int month;
    int year;
};

struct Student
{
    string name;
    DOB date;
};

int main()
{
    Student s;

    cout << "Enter your name: ";
    cin >> s.name;

    cout << "Enter your date of birth:\n";

    cout << "Enter day: ";
    cin >> s.date.day;

    cout << "Enter month: ";
    cin >> s.date.month;

    cout << "Enter year: ";
    cin >> s.date.year;

    cout << "\n----- Student Details -----\n";

    cout << "Name: " << s.name << endl;

    cout << "Date of Birth: "
         << s.date.day << "/"
         << s.date.month << "/"
         << s.date.year << endl;

    return 0;
}

