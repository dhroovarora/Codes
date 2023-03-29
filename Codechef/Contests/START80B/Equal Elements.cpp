https://www.codechef.com/START80B/problems/EQUALELE




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++)
	        m[arr[i]]++;
	    int k = 0;
	    for(auto i : m){
	        if(k < i.second)
	            k = i.second;
	    }
	    cout << n - k << endl;
	}
	return 0;
}