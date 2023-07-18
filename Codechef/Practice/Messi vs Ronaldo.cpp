https://www.codechef.com/problems/MVR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,x,y;
	cin >> a >> b >> x >> y;
	(2*a + b > 2*x + y) ? cout << "Messi" : (2*a + b == 2*x + y) ? cout << "Equal" : cout << "Ronaldo" ;
	cout << endl;
	return 0;
}