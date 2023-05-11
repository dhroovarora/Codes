https://www.codechef.com/START55C/problems/PERMCLEAR




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>k;
	    int b[k];
	    map<int,int> m;
	    for(int i=0;i<k;i++){
	        cin>>b[i];
	        m[b[i]]++;
	    }
	    int ans[n];
	    int j=0;
	    for(int i=0;i<n;i++){
	        if(!m[a[i]]){
	            ans[j++] = a[i];
	        }
	    }
	    for(int i=0;i<j;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}