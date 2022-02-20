// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthOfSeries(long long int n){
        // code here
        long long int a = 9;
        for(int i=0;i<n-1;i++){
            a = a + 24 + 16*i;
        }
        return a;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthOfSeries(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends