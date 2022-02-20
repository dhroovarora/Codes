// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int q=0;
        for(int i=L+1;i<R;i++){
            int j = i;
            while(j>0){
                if(j%10==X){
                    q++;
                }
                j = j/10;
            }
        }
        return q;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, X;
        cin >> L >> R >> X;
        Solution ob;
        int ans = ob.countX(L, R, X);
        cout << ans << "\n";
    }
}
  // } Driver Code Ends