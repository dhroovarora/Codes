https://www.codechef.com/problems/CHEFSTEP




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    for(int i=0;i<n;i++){
	        int p;
	        cin >> p;
	        if(p%k == 0)
	            cout << 1;
	        else
	            cout << 0;
	    }
	    cout << endl;
	}
	return 0;
}