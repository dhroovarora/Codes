https://www.codechef.com/problems/EQBYXOR




#include<iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll a,b,n,z=1;
	    cin>>a>>b>>n;
	    while(z<n){
	        z = 2*z;
	    }
	    if((a^b) == 0){
	        cout<<"0\n";
	    }
	    else if((a^b)<n){
	        cout<<"1\n";
	    }
	    else if((a^b)<z){
	        cout<<"2\n";
	    }
	    else{
	        cout<<"-1\n";
	    }
	}
	return 0;
}