https://www.codechef.com/problems/SUNDAY




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
	    s.insert(6);
	    s.insert(7);
	    s.insert(13);
	    s.insert(14);
	    s.insert(20);
	    s.insert(21);
	    s.insert(27);
	    s.insert(28);
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        s.insert(k);
	    }
	    cout << s.size() << endl;
	}
	return 0;
}