#include<iostream>
using namespace std;
int main(){
	int arr[5] = {10,23,45,67,8};
	int *p;
	p = arr;
	while(p<arr+5){
		cout << *p << endl;
		p++;
	}
	return 0;
}
