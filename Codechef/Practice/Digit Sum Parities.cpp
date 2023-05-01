https://www.codechef.com/problems/DIGSMPAR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n; 
	    cin >> n;
	    int m = n;
	    int c = 0;
	    while(n%10 == 9){
	        c++;
	        n /= 10;
	    }
	    if(c%2)
	        cout << m + 2;
	    else
	        cout << m + 1;
	    cout << endl;
	}
	return 0;
}