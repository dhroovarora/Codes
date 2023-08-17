https://www.codechef.com/problems/ATTND




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<string> a;
	    vector<string> b;
	    unordered_map<string,int> m;
	    for(int i=0;i<n;i++){
	        string q,w;
	        cin >> q >> w;
	        a.push_back(q);
	        b.push_back(w);
	        ++m[q];
	    }
	    for(int i=0;i<n;i++){
	        if(m[a[i]] == 1)
	            cout << a[i] << endl;
	        else
	            cout << a[i] << " " << b[i] << endl;
	    }
	}
	return 0;
}