https://www.codechef.com/START84B/problems/CHFADJSUM




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
	    sort(arr,arr+n);
	    int Z = arr[n-1] + arr[n-2];
	    bool flag = 1;
	    for(int i=0;i<n/2;i++){
	        if(arr[n-1-i] + arr[i] >= Z){
	            flag = 0;
	            break;
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