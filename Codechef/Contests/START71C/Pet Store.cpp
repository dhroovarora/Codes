https://www.codechef.com/problems/PETSTORE




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        m[a[i]]++;
	    }
	    bool flag = 1;
	    for(auto i :m)
	        if(i.second%2)
	            flag = 0;
	    if(flag)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
