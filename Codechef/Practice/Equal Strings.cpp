https://www.codechef.com/problems/EQUALSTRING




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string a;
	    string b;
	    cin >> a >> b;
	    set<char> s;
	    for(int i=0;i<n;i++){
	        if(a[i] != b[i]){
	            s.insert(b[i]);
	        }
	    }
	    cout << s.size() << endl;
	}
	return 0;
}