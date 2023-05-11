https://www.codechef.com/START89B/problems/POSITNEG




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long p = 0;
	    for(int i=1;i<=n;i++){
	        int k;
	        cin >> k;
	        if(k == 1)
	            p += i;
	        else
	            p -= i;
	    }
	    cout << abs(p) << endl;
	}
	return 0;
}