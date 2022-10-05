https://www.codechef.com/problems/FLIPCARDS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(x < n-x)
	        cout<<x<<endl;
	    else
	        cout<<n - x<<endl;
	}
	return 0;
}
