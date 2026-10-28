#include <iostream>
using namespace std;

class Greatest
{
    int a, b;

public:
    void set_data(int x, int y)
    {
        this->a = x;
        this->b = y;
    }

    int greatest()
    {
        if (this->a > this->b)
            return this->a;
        else
            return this->b;
    }
};

int main()
{
    Greatest obj;
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    obj.set_data(x, y);

    cout << "Greatest number = " << obj.greatest() << endl;

    return 0;
}

