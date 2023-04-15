https://www.codechef.com/problems/CHNGIT




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        m[k]++;
	    }
	    int ans = 0;
	    for(auto i:m){
	        ans = max(ans,i.second);
	    }
	    cout << n - ans << endl;
	}
	return 0;
}