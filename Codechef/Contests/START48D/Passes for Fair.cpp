https://www.codechef.com/START48D/problems/FAIRPASS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int k;
	cin>>k;
	while(k--){
	    int n,k;
	    cin>>n>>k;
	    if(n<k){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}