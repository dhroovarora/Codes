https://www.codechef.com/problems/INSTDUM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int sum = 0;
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        sum += k;
	        if(sum == i+1)
	            ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}