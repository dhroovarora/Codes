https://www.codechef.com/problems/BUYING2




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int a[n] , sum = 0;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        sum += a[i];
	    }
	    ((sum)/x == (sum - *min_element(a,a+n))/x) ? cout << -1 : cout << sum/x ;
	    cout << endl;
	}
	return 0;
}