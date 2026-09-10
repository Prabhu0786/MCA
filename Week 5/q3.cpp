#include <iostream>
using namespace std;

int main() {
    int n, arr[n];

    cout <<"Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
int len= sizeof(arr)/sizeof(arr[0]);
    cout << "Length of the array = " << len << endl;

    return 0;
} 
