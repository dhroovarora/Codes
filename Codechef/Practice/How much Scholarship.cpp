https://www.codechef.com/problems/ZCOSCH




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r;
	cin >> r;
	(r <= 50 ) ? cout << 100 : (r <= 100) ? cout << 50 : cout << 0 ;
	return 0;
}