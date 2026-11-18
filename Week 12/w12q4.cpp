
#include <iostream>
using namespace std;

class Counter
{
private:
    static int created;
    static int destroyed;

public:

    Counter()
    {
        created++;
        cout << "Object Created: " << created << endl;
    }

   
    ~Counter()
    {
        destroyed++;
        cout << "Object Destroyed: "
             << destroyed << endl;
    }

    static void display()
    {
        cout << "\nTotal Objects Created: "
             << created << endl;

        cout << "Total Objects Destroyed: "
             << destroyed << endl;
    }
};


int Counter::created = 0;
int Counter::destroyed = 0;

int main()
{
    cout << "Entering First Block" << endl;

    {
        Counter obj1, obj2;
    }

    cout << "\nEntering Second Block" << endl;

    {
        Counter obj3;
        Counter obj4;
    }

    Counter::display();

    return 0;
}

