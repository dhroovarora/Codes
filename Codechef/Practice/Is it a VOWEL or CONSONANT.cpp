https://www.codechef.com/problems/VOWELTB




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char c;
	cin >> c;
	(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ? cout << "Vowel" : cout << "Consonant";
	cout << endl;
	return 0;
}