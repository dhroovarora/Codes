https://www.codechef.com/problems/POSPROD




#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int q;
	    cin >> q;
	    ll n = 0 , p = 0;
	    for(int i=0;i<q;i++){
	        int k;
	        cin >> k;
	        if(k < 0)
                ++n;
            else if(k > 0)
                ++p;
	    }
	    cout << (n*(n-1))/2 + (p*(p-1))/2 << endl;
	}
	return 0;
}