https://www.codechef.com/problems/RECIPE




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
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int gcd = arr[0];
	    for(int i=1;i<n;i++)
	        gcd = __gcd(gcd,arr[i]);
	    for(int i=0;i<n;i++)
	        cout << (arr[i])/gcd << " ";
	    cout << endl;
	}
	return 0;
}