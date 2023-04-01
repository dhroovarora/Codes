https://www.codechef.com/problems/CO92JUDG




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
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        ans = max(ans,k);
	        sum += k;
	    }
	    sum -= ans;
	    ans = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        ans = max(ans,k);
	        sum -= k;
	    }
	    sum += ans;
	    (sum < 0) ? cout << "Alice" : (sum > 0) ? cout << "Bob" : cout << "Draw";
	    cout << endl;
	}
	return 0;
}