https://www.codechef.com/problems/DECINC




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	(n%4) ? n-- : n++;
	cout << n;
	return 0;
}