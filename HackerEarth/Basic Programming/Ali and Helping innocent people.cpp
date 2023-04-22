https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/




#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	int a = s[0] + s[1];
	int b = s[3] + s[4];
	int c = s[4] + s[5];
	int d = s[7] + s[8];
	if(a%2 || b%2 || c%2 || d%2 || s[2] == 'A' || s[2] == 'E' || s[2] == 'I' || s[2] == 'O' || s[2] == 'U' || s[2] == 'Y')
		cout << "invalid";
	else
		cout << "valid";
}