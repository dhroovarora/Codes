https://www.codechef.com/problems/WEEDING




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m,x;
	    cin >> n >> m >> x;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    (a[n-1] + x - 1 <= m) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}