https://www.codechef.com/problems/THREETOPICS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,x;
	cin >> a >> b >> c >> x;
	(x == a || x == b || x == c) ? cout <<"YES" : cout <<"NO";
	cout << endl;
	return 0;
}
