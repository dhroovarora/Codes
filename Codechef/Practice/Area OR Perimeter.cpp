https://www.codechef.com/problems/AREAPERI




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int l,b;
	cin >> l >> b;
	(l*b > l + l + b + b)  ? cout << "Area" << endl << l*b: (l*b < l + l + b + b) ? cout << "Peri" << endl << l + l + b + b : cout << "Eq" << endl << l*b;
	return 0;
}