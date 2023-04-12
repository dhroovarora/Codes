https://www.codechef.com/problems/BREAKSTICK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    if(x%2)
	        cout << "YES";
	    else{
	        if(n%2)
	            cout << "NO";
	        else
	            cout << "YES";
	    }
	    cout << endl;
	}
	return 0;
}