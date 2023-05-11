https://www.codechef.com/START48D/problems/BUYLAMP




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    int dhroov=0;
	    dhroov += k*x;
	    n = n-k;
	    if(x<y){
	        dhroov += n*x;
	    }
	    else{
	        dhroov += n*y;
	    }
	    cout<<dhroov<<endl;
	}
	return 0;
}