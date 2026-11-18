
#include <iostream>
using namespace std;

class Calculator
{
private:
    int a, b, c, d;

public:
    // Parameterized constructor
    Calculator(int x, int y, int z, int w)
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }

    void display()
    {
        cout << "Addition: " << a + b + c + d << endl;
        cout << "Subtraction: " << a - b - c - d << endl;
        cout << "Multiplication: " << a * b * c * d << endl;

        if (b != 0 && c != 0 && d != 0)
            cout << "Division: "
                 << (float)a / b / c / d << endl;
        else
            cout << "Division not possible" << endl;
    }
};

int main()
{
    Calculator obj(20, 5, 2, 1);

    obj.display();

    return 0;
}

