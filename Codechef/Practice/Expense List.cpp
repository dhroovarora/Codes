https://www.codechef.com/problems/EXPENSES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int ans = 1;
	    for(int i=0;i<x-n;i++)
	        ans *= 2;
	    cout << ans << endl;
	}
	return 0;
}