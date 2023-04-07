https://www.codechef.com/problems/L56GAME




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int o = 0;
	    int e = 0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin >> k;
	        (k%2) ? o++ : e++;
	    }
	    (o%2 && n != 1) ? cout << 2 : cout << 1;
	    cout << endl;
	}
	return 0;
}