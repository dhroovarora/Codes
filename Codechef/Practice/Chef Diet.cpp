https://www.codechef.com/problems/DIET




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    int e = 0;
	    bool flag = 0;
	    int i = 0;
	    for(;i<n;i++){
	        e += a[i];
	        if(e < k){
	            flag = 1;
	            break;
	        }
	        e -= k;
	    }
	    (flag) ? cout << "NO " << i+1 : cout << "YES";
	    cout << endl;
	}
	return 0;
}