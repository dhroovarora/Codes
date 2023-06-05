https://www.codechef.com/problems/VOTERS




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin >> a >> b >> c;
	map<int,int> m;
	for(int i=0;i<a;i++){
	    int k;
	    cin >> k;
	    m[k]++;
	}
	for(int i=0;i<b;i++){
	    int k;
	    cin >> k;
	    m[k]++;
	}
	for(int i=0;i<c;i++){
	    int k;
	    cin >> k;
	    m[k]++;
	}
	int p = 0;
	for(auto it : m)
	    if(it.second >= 2)
	        p++;
	cout << p << endl;
	for(auto it : m)
	    if(it.second >= 2)
	        cout << it.first << endl;
	return 0;
}