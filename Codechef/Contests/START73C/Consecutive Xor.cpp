https://www.codechef.com/START73C/problems/XOR2/




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
	    for(int i=1;i<n;i++){
	        arr[i] = arr[i] ^ arr[i-1];
	        arr[i-1] = 0;
	    }
	    int c = n;
	    for(int i=0;i<n;i++)
	        if(arr[i]) c--;
	    if(c == n)
	        cout << "Yes" << endl;
	    else if(c == n-1){
	        if(n%2==0)
	            cout << "No" << endl;
	        else
	            cout << "Yes" << endl;
	    }
	    else
	        cout << "No" << endl;
	}
	return 0;
}
