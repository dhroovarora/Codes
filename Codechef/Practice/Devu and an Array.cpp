https://www.codechef.com/problems/DEVARRAY




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,q;
	cin >> n >> q;
	int arr[n];
	for(int i=0;i<n;i++)
	    cin >> arr[i];
	int mini = *min_element(arr,arr+n),maxi = *max_element(arr,arr+n);
	while(q--){
	    int t;
	    cin >> t;
	    (t >=  mini&& t <= maxi) ? cout << "Yes" : cout << "No";
	    cout << endl;
	}
	return 0;
}