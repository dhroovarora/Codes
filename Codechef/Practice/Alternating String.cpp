https://www.codechef.com/problems/ALTSTR




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
	    int c0 = 0;
	    int c1 = 0;
	    for(int i=0;i<n;i++)
	        (s[i] == '0') ? c0++ : c1++ ;
	    if(c0 == c1)
	        cout << 2 * c0 ;
	    else
	        cout << 2 * min(c0,c1) + 1;
	    cout << endl;
	}
	return 0;
}