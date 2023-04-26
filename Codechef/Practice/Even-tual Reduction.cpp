https://www.codechef.com/problems/EVENTUAL




#include <bits/stdc++.h>
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
	    unordered_map<char,int> m;
	    bool flag = 0;
	    for(int i=0;i<n;i++)
	        m[s[i]]++;
	    for(auto i : m){
	        if(i.second%2){
	            flag = 1;
	            break;
	        }
	    }
	    (flag) ? cout << "NO" : cout << "YES";
	    cout << endl;
	}
	return 0;
}