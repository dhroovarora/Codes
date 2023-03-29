https://www.codechef.com/START79B/problems/DISTOPPSUMS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    for(int i=1;i<=n;i++){
	        if(i <= n/2)
	            cout << n/2 - i + 1 << " ";
	        else
	            cout << i << " ";
	    }
	    cout << endl;
	}
	return 0;
}