#include<stdio.h>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
//using namespace string;
int main() {
	string str = "asdasdasd";
	string temp = "";
	for (int i = 0; str[i]; i++) {
		//cout << str[i]-'a' << endl;
		//temp[i] += 'a';
	}
	//	temp[9] = '\0';
	temp += "aasdasdasd";

	//temp[1] = 'a';
	cout << temp;


	return 0;
}