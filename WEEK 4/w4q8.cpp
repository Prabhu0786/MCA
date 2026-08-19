#include<iostream>
using namespace std;
int main(){
	int n , sum = 0 , rem,temp;
	cout << "Enter a number :- ";
	cin >> n;
	temp = n;
	while(temp!=0){
		rem =temp%10;
		sum = sum + (rem*rem*rem);
		temp = temp/10;
	}
	if(sum==n){
		cout << n << " is a armstrong number....";
	
	}
	else{
		cout << n << "is not a armstrong number.....";
	}
	}

