https://www.codechef.com/problems/MAXADJSUM




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
	    int min1 = INT_MAX,min2 = INT_MAX;
	    int sum = 0;
	    for(int i=0;i<n;++i){
	        cin >> arr[i];
	        sum += arr[i];
	        if(arr[i] < min1){
	            if(arr[i] < min2){
	                min1 = min2;
	                min2 = arr[i];
	            }
	            else
	                min1 = arr[i];
	        }
	    }
	    cout << 2*sum - min1 - min2 << endl;
	}
	return 0;
}