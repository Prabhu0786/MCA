#include <iostream>
using namespace std;

void swap_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside swap_value(): "
         << a << " " << b << endl;
}

void swap_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1. Call by value\n";
    cout << "2. Call by reference\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            swap_value(a, b);
            cout << "After call by value: "
                 << a << " " << b << endl;
            break;

        case 2:
            swap_reference(a, b);
            cout << "After call by reference: "
                 << a << " " << b << endl;
            break;

        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
