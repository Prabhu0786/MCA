#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    int positive = 0, negative = 0;
    int odd = 0, even = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Positive numbers = " << positive << endl;
    cout << "Negative numbers = " << negative << endl;
    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;

    return 0;
}
