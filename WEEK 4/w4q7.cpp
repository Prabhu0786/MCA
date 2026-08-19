#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    double sol;

    cout << "Enter a :- ";
    cin >> a;

    cout << "Enter b :- ";
    cin >> b;

    cout << "Enter c :- ";
    cin >> c;

    int d = (b * b) - 4 * a * c;

    if (d >= 0)
    {
        sol = (-b + sqrt(d)) / (2 * a);
        cout << endl << "Solution = " << sol;
    }
    else
    {
        cout << endl << "No real solution";
    }

    return 0;
}
