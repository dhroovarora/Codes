#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
class Solution {
  public:
    int getHypotenuse(long long N) {
        // code here
        long int h;
        h = 2 * sqrt(N);
        int a = floor(int(h));
        return a;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;

        cin>>N;

        Solution ob;
        cout << ob.getHypotenuse(N) << endl;
    }
    return 0;
}  // } Driver Code Ends