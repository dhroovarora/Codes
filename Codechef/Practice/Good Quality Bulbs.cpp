https://www.codechef.com/problems/BULBLIFE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int sum = 0;
	    for(int i=0;i<n-1;i++){
	        int k;
	        cin >> k;
	        sum += k;
	    }
	    n*x - sum < 0 ? cout << 0 : cout << n*x - sum;
	    cout << endl;
	}
	return 0;
}