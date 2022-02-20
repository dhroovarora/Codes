
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
// 	void nextGreatest(int arr[], int n) {
// 	    // code here
// 	    for(int i=0;i<n-1;i++){
// 	        int q = arr[i+1];
// 	        for(int j=i+2;j<n;j++){
// 	            if(q<arr[j]){
// 	                q = arr[j];
// 	            }
// 	        }
// 	        arr[i] = q;
// 	    }
// 	    arr[n-1] = -1;
// 	}
void nextGreatest(int arr[], int n) {
   int greater_right=-1;
   for(int i=n-1;i>=0;i--){
       int temp=arr[i];
       arr[i]= greater_right;
        greater_right=max( greater_right,temp);
   }
  
}


};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends