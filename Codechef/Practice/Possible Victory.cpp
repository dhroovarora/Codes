https://www.codechef.com/problems/T20MCH




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r,o,c;
	cin >> r >> o >> c;
	(r - c < (20 - o)*36) ? cout << "YES" : cout << "NO";
	return 0;
}