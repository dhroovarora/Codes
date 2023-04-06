https://www.codechef.com/problems/TABLET




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,b;
	    cin >> n >> b;
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        int q,w,e;
	        cin >> q >> w >> e;
	        if(e <= b){
	            ans = max(ans,q*w);
	        }
	    }
	    if(ans == 0)
	        cout << "no tablet";
	    else
	        cout << ans;
	    cout << endl;
	}
	return 0;
}