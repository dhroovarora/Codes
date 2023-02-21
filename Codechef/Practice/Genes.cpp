https://www.codechef.com/problems/GENE01




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char e,p;
	cin >> e >> p;
	(e == p) ? cout << e : (e == 'R' || p == 'R') ? cout << 'R' : (e== 'B' || p == 'B') ? cout << 'B' : cout << 'G';
	return 0;
}