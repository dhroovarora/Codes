#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,a;
	cin>>t;
	while(t--){
	    cin>>n>>a;
	    if(a<=n-a){
	        cout<<a<<endl;
	    }
	    else{
	        cout<<n-a<<endl;
	    }
	}
	return 0;
}
