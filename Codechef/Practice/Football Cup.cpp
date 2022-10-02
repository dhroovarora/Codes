https://www.codechef.com/problems/FOOTCUP




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int dhroov,flank;
	    cin>>dhroov>>flank;
	    if(dhroov == flank && dhroov>0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}