https://www.codechef.com/problems/LOSTARRAY_




#include <iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    ll b[n+1],z=0;
	    for(int i=0;i<n+1;i++){
	        cin>>b[i];
	        z = z^b[i];
	    }
	    if(n%2==0){
	        z = b[0];   
	    }
	    else{
	   	    for(int i=1;i<n+1;i++){
	            if(z == b[i]){
	                swap(b[0],b[i]);
	            }
	        }
	    }
	    for(int i=1;i<n+1;i++){
	        cout<<(b[i] ^ z)<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}