#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,a[101];
	cin>>t;
	while(t--){
	    int q =1;
	    cin>>n>>k;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int w = 0;
	    for(int i=n-1;i>=0;i--){
	        w = w + a[i];
	        if(w >= k){
	            cout<<q<<endl;
	            break;
	        }
	        q++;
	    }
	    if(w<k){
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}
