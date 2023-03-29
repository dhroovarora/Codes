https://www.codechef.com/START77C/problems/CHRGES




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,ans = 0;
	    cin >> n;
	    string s;
	    cin >> s;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	        if(s[i] != '0')
	            v.push_back(i);
	    if(v.size() == 1){
	        cout << 0 << endl;
	        continue;
	    }
	    if(v.size() == 0){
	        cout << n << endl;
	        continue;
	    }
	    for(int i= 0;i<v.size()-1;i++){
	        if(s[v[i]] != s[v[i+1]])
	        {
	            int q = v[i+1] - v[i] - 1;
	            if(q%2)
	                ans++;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}