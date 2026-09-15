#include<iostream>
using namespace std;
int main() {
    int arr[5];
    int *ptr;
    ptr = arr;
    cout << "Enter elements of array :- ";
    for(int i=0;i<5;i++){
     cin >> *(ptr + i);
 }
 	cout << "Elements of array are :- ";
    for(int i=0;i<5;i++){
    	cout  << arr[i];
	}
	return 0;
	}
