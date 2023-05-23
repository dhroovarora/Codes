https://www.codechef.com/problems/LAPTOPREC




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
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        m[k]++;
	    }
	    int ans = 0,dhr = 0,p=0;
	    for(auto i:m)
	        ans = max(ans,i.second);
	    for(auto i:m){
	        if(ans == i.second){
	            p++;
	            dhr = i.first;
	        }
	    }
	    if(p>1)
	        cout << "CONFUSED";
	    else
	        cout << dhr;
	    cout << endl;
	}
	return 0;
}