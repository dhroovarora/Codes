https://www.codechef.com/problems/CHEFBOTTLE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,k;
	    cin >> n >> x >> k;
	    (n < (k/x)) ? cout << n : cout << (k/x);
	    cout << endl;
	}
	return 0;
}