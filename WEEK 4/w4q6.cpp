#include<iostream>
using namespace std;
int main(){
	char ch;
	int category , ascii;
	cout << "Enter a character :- ";
	cin >> ch;
	ascii =(int)ch;
	if(ascii>= 65 && ascii <= 90)
		category = 1;
	else if(ascii >= 97 && ascii <= 122)
		category =2;
	else if(ascii >= 48 && ascii <=57)
		category = 3;
	else
		category = 4;
	
	switch(category){
		case 1:
			cout << "Capital letter";
			break;
		case 2:
			cout << "Small letter";
			break;
		case 3:
			cout << "Digit";
			break;
		case 4:
			cout << "Special Symbol";
			break;
	}
	return 0;
}
