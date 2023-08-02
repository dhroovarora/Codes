https://www.codechef.com/problems/CENS20D




#include <iostream>
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
	    int ans = 0;
	    for(int i=0;i<n-1;i++)
	        for(int j=i+1;j<n;j++)
	            if(arr[i] == (arr[i] & arr[j]))
	                ++ans;
	    cout << ans << endl;
	}
	return 0;
}