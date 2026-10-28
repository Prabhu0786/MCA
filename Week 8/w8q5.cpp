#include<iostream>
using namespace std;
int main(){
	string s = "Hello World";
	string t = "World";
	 int pos = s.find(t);
	 if(pos!= -1)
	 cout << pos;
	 else
	 cout << -1;
}
