https://www.codechef.com/problems/MINFLIPS




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
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    (sum%2) ? cout << -1 : (sum<0) ? cout << (-1)*(sum/2)  : cout << sum/2;
	    cout << endl;
	}
	return 0;
}