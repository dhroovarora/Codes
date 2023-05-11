https://www.codechef.com/START48D/problems/FILLCANDIES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,m;
	    cin>>n>>k>>m;
	    if(n%(k*m) != 0){
	        cout<<n/(k*m) + 1<<endl;
	    }
	    else{
	        cout<<n/(k*m)<<endl;
	    }
	}
	return 0;
}