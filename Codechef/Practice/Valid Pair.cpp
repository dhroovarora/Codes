https://www.codechef.com/problems/SOCKS1




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin >> a >> b >> c;
	(a==b || b==c || a==c) ? cout << "YES" : cout << "NO";
	return 0;
}