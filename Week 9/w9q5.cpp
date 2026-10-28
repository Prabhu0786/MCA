#include <iostream>
using namespace std;

void display(int a[], int n, int index)
{
    if (index == n)
        return;

    cout << a[index] << " ";
    display(a, n, index + 1);
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

    cout << "Array elements are: ";
    display(a, n, 0);

    cout << endl;
    return 0;
}
