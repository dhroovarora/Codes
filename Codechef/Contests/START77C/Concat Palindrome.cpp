https://www.codechef.com/START77C/problems/CONCATPAL




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    string a,b;
	    cin >> a >> b;
	    map<char,int> m;
	    if(k > n){
	        swap(n,k);
	        swap(a,b);
	    }
	    for(int i=0;i<n;i++)
	        m[a[i]]++;
	    for(int i=0;i<k;i++)
	        m[b[i]]--;
	    int f = 1,c = 0;
	    for(auto e : m){
	        if(e.second < 0){
	            f = 0;
	            break;
	        }
	        if(e.second %2 == 0)
	            continue;
	        if(c)
	            f = 0;
	        else
	            c = 1;
	    }
	    if(f)
	        cout << "YES";
	    else
	        cout << "NO";
	    cout << endl;
	}
	return 0;
}