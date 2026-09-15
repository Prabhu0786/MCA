#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout << "Enter two numbers :- ";
	cin >> a >>b;
	int *p1 =&a;
	int *p2 =&b;
	c = *p1;
	*p1 = *p2 ;
	*p2 = c;
	cout << "Numbers after swapping : -";
	cout << a << b;
	return 0;
}
