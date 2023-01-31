https://www.codechef.com/problems/SELFDEF




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        if(k > 9 && k < 61)
	            ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}