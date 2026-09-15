#include<iostream>
using namespace std;
int main(){
	char str[] = "Prabhu ";
	char str1[] = "Narayan";
	char *p1 = str;
	char *p2 = str1;
	while(*p1!='\0')
		p1++;
	while(*p2!='\0'){
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';
	cout << str;
	return 0;
	}
