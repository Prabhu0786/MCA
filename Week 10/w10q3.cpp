
#include <iostream>
using namespace std;

struct Book
{
    int book_id;
    string title;
    string author;
    float price;
};

void display(Book b)
{
    cout << "\n----- Book Details -----\n";
    cout << "Book ID: " << b.book_id << endl;
    cout << "Title: " << b.title << endl;
    cout << "Author Name: " << b.author << endl;
    cout << "Price: " << b.price << endl;
}

int main()
{
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.book_id;

    cout << "Enter Book Title: ";
    cin >> b.title;

    cout << "Enter Author Name: ";
    cin >> b.author;

    cout << "Enter Book Price: ";
    cin >> b.price;

    display(b);

    return 0;
}

