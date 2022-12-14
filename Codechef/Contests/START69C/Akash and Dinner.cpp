https://www.codechef.com/START69C/problems/CHEFDINE




#include <bits/stdc++.h>
using namespace std;

bool sortpair(const pair<int,int>&p,const pair<int,int> &q)
{
    return (p.second < q.second );
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    vector<int> b(n);
	    vector<pair<int,int>> v;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++){
	        v.push_back(make_pair(a[i],b[i]));
	    }
	    map<int,int> m;
	    sort(v.begin(),v.end(),sortpair);
	    long long ans = 0;
	    for(int i=0;i<n;i++){
	        if(m[v[i].first]==0){
	            ans += v[i].second;
	            m[v[i].first]++;
	            k--;
	        }
	        if(k==0)
	            break;
	    }
 	    if(k==0)
 	        cout<<ans;
 	    else
 	        cout<<-1;
 	    cout<<endl;
	}
	return 0;
}
