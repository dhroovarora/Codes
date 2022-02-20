#include<iostream>
#include<cmath>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int leftShops(long long int i, long long int L){
        // code here
        return pow(2,L) - i;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int i, L;
        cin >> i >> L;
        Solution ob;
        cout << ob.leftShops(i, L) << endl;
    }
    return 0;
}
  // } Driver Code Ends