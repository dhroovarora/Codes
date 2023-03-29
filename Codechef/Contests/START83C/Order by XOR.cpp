https://www.codechef.com/START83C/problems/XOR_ORDER




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int q = 0;
	    int w = 0;
	    for(int i=0;i<100;i++){
	        if((a^i) < (b^i)){
	            if((b^i) < (c^i)){
	                w = i;
	                q++;
	            }
	        }
	    }
	    (q==0) ? cout << -1 << endl : cout << w << endl;
	}
	return 0;
}