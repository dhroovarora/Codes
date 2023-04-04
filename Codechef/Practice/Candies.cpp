https://www.codechef.com/problems/CNDY




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    unordered_map<int,int> m;
	    int n;
	    cin >> n;
	    for(int i=0;i<2*n;i++){
	        int k;
	        cin >> k;
	        m[k]++;
	    }
	    bool flag = 1;
	    for(auto i :m){
	        if(i.second > 2){
	            flag = 0;
	        }
	    }
	    if(flag)
	        cout << "YES";
	    else
	        cout << "NO";
	    cout << endl;
	}
	
	return 0;
}