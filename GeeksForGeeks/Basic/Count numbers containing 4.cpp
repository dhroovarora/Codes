#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int countNumberswith4(int N) {
        
        int ans=0;
        
        for(int i=4; i <= N; i++)
        {
            int n=i;
            
            while(n > 0)
            {
                int k=n%10;
                if(k==4)
                {
                    ans++;
                    break;
                }
                n=n/10;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}  // } Driver Code Ends