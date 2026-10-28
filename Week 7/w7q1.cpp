#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    char *ptr;
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
            *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' ||
            *ptr == 'O' || *ptr == 'U')
        {
            count++;
        }

        ptr++;
    }

    cout << "Number of vowels = " << count << endl;

    return 0;
}

