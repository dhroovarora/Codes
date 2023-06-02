https://www.codechef.com/problems/PARKINGCHARG




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,h;
	cin >> x >> y >> h;
	cout << x + (h-1)*y;
	return 0;
}