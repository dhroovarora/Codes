https://www.codechef.com/problems/MDL




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n] , p , o;
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    int mini = *min_element(arr,arr+n) , maxi = *max_element(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(arr[i] == mini)
	            p = i;
	        else if(arr[i] == maxi)
	            o = i;
	    }
	    if(p < o)
	        cout << mini << " " << maxi;
	    else
	        cout << maxi << " " << mini;
	    cout << endl;
	}
	return 0;
}