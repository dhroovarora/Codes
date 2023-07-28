https://www.codechef.com/problems/LECANDY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,c;
	    cin >> n >> c;
	    for(int i=0;i<n;i++){
	        int a;
	        cin >> a;
	        c -= a;
	    }
	    (c>=0) ? cout << "Yes" : cout << "No";
	    cout << endl;
	}
	return 0;
}