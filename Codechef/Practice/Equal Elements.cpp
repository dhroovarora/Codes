https://www.codechef.com/practice/course/arrays-strings-sorting/INTARR01/problems/EQUALELE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n] = {0};
	    for(int i=0;i<n;++i){
	        int q;
	        cin >> q;
	        ++a[q-1];
	    }
	    int q = 0;
	    for(int i=0;i<n;++i){
	        q = max(q,a[i]);
	    }
	    cout << n - q << endl;
	}
	return 0;
}