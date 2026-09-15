#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "Enter a :- ";
	cin >> a;
	int *p =&a;
	cout << "Before increment and decrement  :- " << a << endl;
	(*p)++;
	cout << "After increment  :- " << a << endl;;
	(*p)--;
	cout << "After decrement  :- " << a;

	return 0;
}
