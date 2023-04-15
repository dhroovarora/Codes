https://www.codechef.com/problems/CFRTEST




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    set<int> s;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        s.insert(k);
	    }
	    cout << s.size() << endl;
	}
	return 0;
}