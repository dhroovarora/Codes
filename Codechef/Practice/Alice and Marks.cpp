https://www.codechef.com/problems/MARKSTW




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	cin >> x >> y;
	string ans = (x >= 2*y) ? "Yes" : "No";
	cout << ans << endl;
	return 0;
}
