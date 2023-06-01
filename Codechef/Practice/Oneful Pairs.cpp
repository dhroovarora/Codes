https://www.codechef.com/problems/ONEFULPAIRS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin >> a >> b;
	(a + b +(a*b) == 111) ? cout << "YES" : cout << "NO";
	cout << endl;
	return 0;
}