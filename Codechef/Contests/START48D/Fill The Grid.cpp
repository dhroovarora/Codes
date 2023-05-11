https://www.codechef.com/START48D/problems/GRIDBL




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n%2 == 0){
	        if(m%2 ==0){
	            cout<< 0<<endl;
	        }
	        else{
	            cout<<n<<endl;
	        }
	    }
	    else if(m%2==0){
	        cout<<m<<endl;
	    }
	    else{
	        cout<<n*m -(n-1)*(m-1)<<endl;
	    }
	}
	return 0;
}