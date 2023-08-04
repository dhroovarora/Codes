https://www.codechef.com/problems/LCH15JAB




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    unordered_map<int,int> m;
	    int maxi = 0;
	    for(auto i : s)
	        ++m[i];
	    for(auto i : m)
	        maxi = max(maxi,i.second);
	    (s.size()%2 == 0 && maxi == s.size()/2) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}