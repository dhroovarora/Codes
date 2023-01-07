https://www.codechef.com/SEP221C/problems/PBATTLE/




#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    ll n;
// 	    cin>>n;
// 	    ll a[n];
// 	    ll b[n];
// 	    for(ll i=0;i<n;i++){
// 	        cin>>a[i];
// 	    }
// 	    for(ll i=0;i<n;i++){
// 	        cin>>b[i];
// 	    }
	    
	    
// 	    ll lol[n];
// 	    ll p =0;
// 	    for(ll i=0;i<n;i++){
	        
// 	        ll d = 0;
// 	        for(ll j=0;j<n;j++){
//                 if(a[j] < a[i]){
//                     if(b[j] > b[i]){
//                         d++;
//                     }
//                 }
//                 if(b[j] < b[i]){
//                     d++;
//                 }
//             }   

// 	        lol[p++] = d;
// 	    }
// 	    ll k = LLONG_MIN;
//         for(int i=0;i<n;i++){
//             if(k < lol[i]){
//                 k = lol[i];
//             }
//         }
// 	    ll ans=0;
// 	    for(ll i=n-1;i>=0;i--){
//             if(k == lol[i]){
//                 ans++;
//             } 
// 	    }
// 	    cout<<ans<<endl;
// 	}


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        vector<pair <int,int> > v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back(make_pair(a[i],i));
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(v.rbegin(),v.rend());
        set<int> s;
        s.insert(b[v[0].second]);
        int ans =1;
        for(int j=1;j<n;j++){
            s.insert(b[v[j].second]);
            auto lol = s.end();
            lol--;
            if(*lol == b[v[j].second])
                ans++;
        }
        cout<<ans<<endl;
    }
	return 0;
}
