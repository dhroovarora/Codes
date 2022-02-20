#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        if(a[n-1] == 0){
            return -1;
        }
        if(a[0] == 1){
            return 0;
        }
        else{
            for(int i=n-2;i>-1;i--){
                if(a[i]==0){
                    return i+1;
                }
            }
        }
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}  // } Driver Code Ends