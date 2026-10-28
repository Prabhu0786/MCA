#include <iostream>
#include <string>
using namespace std;

void insert(string s, string sub, int pos)
{
    s.insert(pos, sub);
    cout << "After insertion: " << s << endl;
}

void del(string s, int pos, int n)
{
    s.erase(pos, n);
    cout << "After deletion: " << s << endl;
}

int main()
{
    string s, sub;
    int pos, n;

    cout << "Enter main string: ";
    cin >> s;

    cout << "Enter substring: ";
    cin >> sub;

    cout << "Enter position: ";
    cin >> pos;
    insert(s, sub, pos);

    cout << "Enter position and number of characters to delete: ";
    cin >> pos >> n;
    del(s, pos, n);

    return 0;
} 
