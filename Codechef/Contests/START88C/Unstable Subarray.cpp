https://www.codechef.com/START88C/problems/COUNTSUB




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin >> t;
	while(t--){
	    long long n;
	    cin >> n;
	    long long ans = (n*(n-1))/2;
	    long long a[n];
	    unordered_map<long long,long long> m;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        m[a[i]]++;
	    }
	    
	    if(m.size() != n){
	        ans = 0;
	        long long x;
	        long long sum = 0;
	        for(int i=0;i<n-1;i++){
	            x = n - m[a[i]] - sum;
	            ans += x;
	            m[a[i]]--;
	            sum++;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}