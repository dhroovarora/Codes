https://www.codechef.com/problems/FIFTYPE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int c = 0;
	    while(n!=50){
    	    while(n>50){
    	        c++;
    	        n -= 3;
    	    }
    	    while(n < 50){
    	        c++;
    	        n += 2;
    	    }
	    }
	    cout << c << endl;
	}
	return 0;
}