https://www.codechef.com/problems/CIELAB




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin >> a >> b;
	a -= b;
	(a%10 == 9) ? cout << a - 1 : cout << a + 1 ;
	return 0;
}