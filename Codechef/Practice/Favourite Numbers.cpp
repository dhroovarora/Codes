https://www.codechef.com/problems/FAVOURITENUM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a;
	    cin >> a;
	    (a%2 && a%9==0) ? cout << "Bob" : (a%2==0 && a%7==0) ? cout << "Alice" : cout << "Charlie";
	    cout << endl;
	}
	return 0;
}