https://www.codechef.com/problems/AMR15A




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int a[n];
	int count = 0;
	for(int i=0;i<n;i++){
	    cin >> a[i];
	    (a[i]%2) ? count-- : count++;
	}
	(count > 0) ? cout << "READY FOR BATTLE" : cout << "NOT READY";
	cout << endl;
	return 0;
}