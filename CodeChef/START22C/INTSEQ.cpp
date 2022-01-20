#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,k;
	cin>>t;
	while(t--){
	    int q=0;
	    cin>>k;
	    while(k > 1){
	        if(k%2 !=0){
	            break;
	        }
	        else{
	        q++;
	        k = k/2;
	        }
	    }
	    cout<<q<<endl;
	}
	return 0;
}