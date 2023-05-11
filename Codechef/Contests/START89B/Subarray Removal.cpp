https://www.codechef.com/START89B/problems/REMSUBARR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    int i=0;
	    int j=n-1;
	    int count = 1 ,ans = min(a[i],a[j]);
	    while(i<=j){
	        ans = max(ans,min(a[i],a[j]));
	        if(count == ans){
	            cout << j-i << endl;
	            break;
	        }
	        count++;
	        if(a[i] > a[j])
	            j--;
	        else
	            i++;
	    }
	}
	return 0;
}