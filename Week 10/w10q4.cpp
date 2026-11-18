
#include <iostream>
using namespace std;

union Address
{
    char present_address[200];
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[15];
};

int main()
{
    Address a;

    cout << "Enter your present address: ";
    cin.getline(a.present_address, 200);

    cout << "\nYour Present Address is:\n";
    cout << a.present_address << endl;

    return 0;
}

