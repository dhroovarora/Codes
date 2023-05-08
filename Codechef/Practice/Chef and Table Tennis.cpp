https://www.codechef.com/problems/TTENIS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string a;
	    cin >> a;
	    (a[a.size() -1] == '1') ? cout << "WIN" : cout << "LOSE";
	    cout << endl;
	}
	return 0;
}