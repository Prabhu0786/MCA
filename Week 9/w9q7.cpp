#include <iostream>
using namespace std;

int maximum(int a[], int n)
{
    if (n == 1)
        return a[0];

    int maxRest = maximum(a, n - 1);

    return (a[n - 1] > maxRest)
           ? a[n - 1] : maxRest;
}

int minimum(int a[], int n)
{
    if (n == 1)
        return a[0];

    int minRest = minimum(a, n - 1);

    return (a[n - 1] < minRest)
           ? a[n - 1] : minRest;
}

int main()
{
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid array size.\n";
        return 0;
    }

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Maximum element = "
         << maximum(a, n) << endl;

    cout << "Minimum element = "
         << minimum(a, n) << endl;

    return 0;
}
