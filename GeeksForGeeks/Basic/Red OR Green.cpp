//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string S) {
           //code here
           int countR  = 0;
          int countG = 0;
          
          for(int i=0; i<N; i++)
          {
              if(S[i]=='G')
              countG++;
              
              if(S[i]=='R')
              countR++;
          }
          if(countR<countG)
          return countR;
          return countG;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}  // } Driver Code Ends