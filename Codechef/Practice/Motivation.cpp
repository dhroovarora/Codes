https://www.codechef.com/problems/IMDB




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        int a,b;
	        cin >> a >> b;
	        if(a <= x)
	            ans = max(ans,b);
	    }
	    cout << ans << endl;
	}
	return 0;
}