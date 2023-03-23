https://www.codechef.com/problems/BOMBTHEBASE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int i = n-1;
	    for(;i>=0;i--){
	        if(arr[i] < x)
	            break;
	    }
	    cout << i+1 << endl;
	}
	return 0;
}