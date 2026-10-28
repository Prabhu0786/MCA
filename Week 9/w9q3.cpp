#include <iostream>
using namespace std;

void transpose(int a[10][10], int rows, int cols)
{
    cout << "\nTranspose of the matrix:\n";

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[10][10];
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    if (rows < 1 || rows > 10 ||
        cols < 1 || cols > 10)
    {
        cout << "Invalid matrix size.\n";
        return 0;
    }

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    cout << "Original matrix:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << a[i][j] << " ";

        cout << endl;
    }

    transpose(a, rows, cols);

    return 0;
}
