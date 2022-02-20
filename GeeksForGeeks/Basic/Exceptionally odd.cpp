//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        unordered_map<int,int>count;
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        for(auto it:count){
            if(it.second%2){
                return it.first;
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends