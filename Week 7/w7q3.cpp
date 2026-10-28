#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float arr[100];
    float *ptr;
    float sum = 0, mean, variance = 0, standard_deviation;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " real numbers:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ptr = arr;

    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    mean = sum / n;


    for (int i = 0; i < n; i++)
    {
        variance += (*(ptr + i) - mean) * (*(ptr + i) - mean);
    }

    variance = variance / n;

    standard_deviation = sqrt(variance);

    cout << "Sum = " << sum << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard Deviation = " << standard_deviation << endl;

    return 0;
}

