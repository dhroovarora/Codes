https://www.codechef.com/START76C/problems/MAKEARRAYODD




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int odd = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        if(k%2)
	            odd++;
	    }
	    if(odd == n)
	        cout << 0;
	    else if(x%2)
	        cout << ( n - odd + 1)/2;
	    else if(odd == 0)
	        cout << -1;
	    else
	        cout << n - odd;
	    cout << endl;
	}
	return 0;
}