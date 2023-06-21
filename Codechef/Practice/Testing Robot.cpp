https://www.codechef.com/problems/TSTROBOT




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    string s;
	    cin >> s;
	    unordered_set<int> st;
	    st.insert(x);
	    for(int i=0;i<n;i++){
	        if(s[i] == 'R')
	            x++;
	        else
	            x--;
	        st.insert(x);
	    }
	    cout << st.size() << endl;
	}
	return 0;
}