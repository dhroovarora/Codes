// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isDivisible(int N) {
        // code here
        int a=0,b=N;
        while(b>0){
            a = a + b%10;
            b = b/10;
        }
        if(N%a!=0){
            return 0;
        }
        else{
            return 1;
        }
    }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDivisible(N) << "\n";
    }
}  // } Driver Code Ends