https://www.codechef.com/problems/CHN15A




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        int a;
	        cin >> a;
	        if((a+k)%7==0)
	            ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}