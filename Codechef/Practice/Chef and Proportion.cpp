https://www.codechef.com/problems/CHEFCBA




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float a,b,c,d;
	cin >> a >> b >> c >> d;
	((a/b == c/d) || (a/b == d/c) || (a/c == b/d) || (a/c == d/b) || (a/d == b/c) || (a/d == b/c)) ? cout << "Possible" : cout << "Impossible";
	cout << endl;
	return 0;
}