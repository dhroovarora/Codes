https://www.codechef.com/problems/AIRM




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    unordered_map<int,int> m;
	    for(int i=0;i<2*n;i++){
	        int a;
	        cin >> a;
	        ++m[a];
	    }
	    int ans = 0;
	    for(auto i : m)
	        ans = max(ans,i.second);
	    cout << ans << endl;
	}
	return 0;
}
