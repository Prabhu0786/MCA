
#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], target;
    int low, high, mid, index = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    low = 0;
    high = n - 1;

    // Binary Search
    while(low <= high)
    {
        mid = low + (high - low) / 2;

        if(arr[mid] == target)
        {
            index = mid;
            break;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found.";

    return 0;
}

