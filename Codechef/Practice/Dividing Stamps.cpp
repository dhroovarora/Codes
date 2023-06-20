https://www.codechef.com/problems/DIVIDING




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int k;
	int sum = 0;
	for(int i=0;i<n;i++){
	    cin >> k;
	    sum += k;
	}
	(sum == n*(n+1)/2) ? cout << "YES" : cout << "NO";
	cout << endl;
	return 0;
}