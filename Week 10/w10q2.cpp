
#include <iostream>
using namespace std;

struct Employee
{
    string name;
    float basic, da, gross;
};

int main()
{
    Employee e[100];

    for (int i = 0; i < 100; i++)
    {
        cout << "\nEnter details of employee "
             << i + 1 << endl;

        cout << "Enter name: ";
        cin >> e[i].name;

        cout << "Enter basic pay: ";
        cin >> e[i].basic;

        e[i].da = e[i].basic * 52 / 100;
        e[i].gross = e[i].basic + e[i].da;
    }

    cout << "\n----- Employee Salary Details -----\n";

    for (int i = 0; i < 100; i++)
    {
        cout << "\nName: " << e[i].name;
        cout << "\nGross Salary: " << e[i].gross << endl;
    }

    return 0;
}

