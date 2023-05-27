https://www.codechef.com/problems/PLAYSTR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int count = 0;
	    string s,r;
	    cin >> s >> r;
	    for(int i=0;i<n;i++){
	        if(s[i] == '0')
	            count++;
	        if(r[i] == '0')
	            count--;
	    }
	    (count == 0) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}