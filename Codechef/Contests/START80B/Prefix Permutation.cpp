https://www.codechef.com/START80B/problems/SUMPERM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    if(n%2)
	        cout << -1 << endl;
	    else{
	        for(int i=1;i<=n;i++){
	            if(i%2)
	                cout << i+1 << " ";
	            else
	                cout << i-1 << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}