
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int n, choice;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "\n1. Binary";
    cout << "\n2. Octal";
    cout << "\n3. Hexadecimal";
    cout << "\n4. All conversions";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            if(n < 0)
            {
                cout << "Enter a non-negative number.";
                break;
            }

            if(n == 0)
                cout << "Binary = 0";
            else
            {
                int temp = n;
                string binary = "";

                while(temp > 0)
                {
                    binary = char('0' + temp % 2) + binary;
                    temp /= 2;
                }

                cout << "Binary = " << binary;
            }
            break;
        }

        case 2:
            cout << "Octal = " << oct << n;
            break;

        case 3:
            cout << "Hexadecimal = " << hex << n;
            break;

        case 4:
            cout << "Octal = " << oct << n << endl;
            cout << "Hexadecimal = " << hex << n << endl;
            cout << "Binary (non-negative only): ";

            if(n >= 0)
            {
                if(n == 0)
                    cout << "0";
                else
                {
                    string binary = "";
                    int temp = n;

                    while(temp > 0)
                    {
                        binary = char('0' + temp % 2) + binary;
                        temp /= 2;
                    }

                    cout << binary;
                }
            }
            else
                cout << "Not available";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

