https://www.codechef.com/problems/PARTY2




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,dhroov;
	    cin>>n>>x>>dhroov;
	    if(n*x<=dhroov){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}