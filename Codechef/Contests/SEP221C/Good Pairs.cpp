https://www.codechef.com/SEP221C/problems/EQPAIR/\




#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll arr[n];
	    unordered_map<ll,ll> m;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        m[arr[i]]++;
	    }
	    ll c = 0;
	    for(auto i:m){
	        c += (i.second*(i.second -1 ))/2;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
