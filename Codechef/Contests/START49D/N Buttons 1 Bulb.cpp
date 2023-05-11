https://www.codechef.com/START49D/problems/ON_OFF




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,dhroov=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    string r;
	    cin>>r;
	    for(int i=0;i<n;i++){
	        if(s[i] != r[i]){
	            dhroov++;
	        }
	    }
	    if(dhroov &1){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<1<<endl;
	    }
	}
	return 0;
}