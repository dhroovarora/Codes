https://www.codechef.com/START80B/problems/PERMSUBSEQ




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin >> t;
	while(t--){
	    long n;
	    cin >> n;
	    long arr[n];
	    unordered_map<long,long> m;
	    for(long i=0;i<n;i++){
	        cin >> arr[i];
	        m[arr[i]]++;
	    }
	    long i = 1;
	    for(;i<=n;i++){
	        if(m[i] == 0)
	            break;
	    }
	    long long ans = 0;
	    long long k = 1;
	    for(long j=1;j<i;j++){
	        k = k * m[j]%1000000007;
	        k = k%1000000007;
	        ans += k;
	        ans = ans%1000000007;
	    }
	    cout << ans%1000000007 << endl;
	}
	return 0;
}