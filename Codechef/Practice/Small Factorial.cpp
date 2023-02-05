https://www.codechef.com/problems/FLOW018




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a = 1;
	    int l = 1;
	    while(l <= n){
	        a *= l++;
	    }
	    cout << a << endl;
	}
	return 0;
}