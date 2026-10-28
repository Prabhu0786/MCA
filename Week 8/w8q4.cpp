#include<iostream>
#include<sstream>
using namespace std;
int main(){
	string s = "apple mango apple apple";
	string word , target = "apple";
	int count  =0;
	stringstream ss(s);
	while (ss>>word){
	
		if(word == target)
			count++;
		}
		cout << count;
	}


