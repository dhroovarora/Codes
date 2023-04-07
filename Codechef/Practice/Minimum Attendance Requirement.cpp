https://www.codechef.com/problems/ATTENDU




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int c = 0;
	    string s;
	    cin >> s;
	    for(int i=0;i<n;i++){
	        if(s[i] == '1')
	            c += 1;
	    }
	    
	    (n - c <= 30) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}