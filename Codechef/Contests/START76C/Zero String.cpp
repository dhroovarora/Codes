https://www.codechef.com/START76C/problems/ZEROSTRING




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int one = 0 , zero = 0;
	    for(int i=0;i<n;i++)
	        (s[i] == '1') ? one++ : zero++;
	    (zero >= one) ? cout << one : cout << ++zero;
	    cout << endl;
	}
	return 0;
}