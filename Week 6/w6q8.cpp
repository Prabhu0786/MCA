#include<iostream>
using namespace std;
int main(){
	int arr[5]={3,5,8,32,4};
	int  sum=0;
	int *p;
	p = arr;
	for(int i=0;i<5;i++){
		sum = sum +arr[i];
	}
	cout << sum << endl;
	return 0;
}
