https://www.codechef.com/problems/CHECKADJSUM




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,q;
	    cin >> n >> q;
	    int arr[n];
	    int sum = 0;
	    for(int i=0;i<n;++i){
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    unordered_map<int,pair<int,int>> m;
	    for(int i=0;i<n-1;++i){
	        for(int j=i+1;j<n;++j){
	            m[2*sum - arr[i] - arr[j]] = {i,j};
	        }
	    }
	    while(q--){
	        int k;
	        cin >> k;
	        if(m.find(k) != m.end()){
	            cout << arr[m[k].first] << ' ';
	            for(int i=0;i<n;++i){
	                if(i == m[k].first || i == m[k].second)
	                    continue;
	                cout << arr[i] << ' ';
	            }
	            cout << arr[m[k].second];
	        }
	        else
	            cout << - 1;
	        cout << endl;
	    }
	}
	return 0;
}