https://www.codechef.com/problems/DIFFSUM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin >> a >> b;
	(a > b) ? cout << a - b : cout << a + b;
	return 0;
}