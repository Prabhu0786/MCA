#include <iostream>
using namespace std;

int arraySum(int a[], int n)
{
    if (n == 0)
        return 0;

    return a[n - 1] + arraySum(a, n - 1);
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

    cout << "Sum of array elements = "
         << arraySum(a, n) << endl;

    return 0;
}
