https://www.codechef.com/problems/DIVBYI




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
	    bool flag = 1;
	    int p = 1;
	    int q = n;
	    for(int i=n;i>0;i--){
	        if(flag){
	            arr[i-1] = q;
	            --q;
	            flag = 0;
	        }
	        else{
	            arr[i-1] = p;
	            ++p;
	            flag = 1;
	        }
	    }
	    for(int i=0;i<n;i++)
	        cout << arr[i] << " ";
	    cout << endl;
	}
	return 0;
}