https://www.codechef.com/problems/RNDPAIR




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
	    int maxi = 0;
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            maxi = max(maxi,arr[i] + arr[j]);
	            ++m[arr[i] + arr[j]];
	        }
	    }
	    double a = 0 , b = 0;
	    for(auto i : m){
	        if(i.first == maxi)
	            a = i.second;
	        b += i.second;
	    }
	    cout << fixed << setprecision(8) << a/b << endl;
	}
	return 0;
}
