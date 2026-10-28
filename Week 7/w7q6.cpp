#include <iostream>
#include <string>
using namespace std;

class Flight
{
    int flight_number;
    string source;
    string destination;
    float fare;

public:
    Flight(int flight_number, string source, string destination, float fare)
    {
        this->flight_number = flight_number;
        this->source = source;
        this->destination = destination;
        this->fare = fare;
    }

    void display()
    {
        cout << "Flight Number : " << flight_number << endl;
        cout << "Source       : " << source << endl;
        cout << "Destination  : " <<destination << endl;
        cout << "Fare         : " <<fare << endl;
    }
};

int main()
{
    Flight f1(101, "Delhi", "Mumbai", 5500);

   
    cout << "Flight Information" << endl;
    f1.display();

    return 0;
}

