#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int kthDigit(int A,int B,int K){
        // code here
        long int q,w;
        q = pow(A,B);
        for(int i=0;i<K;i++){
            w = q%10;
            q = q/10;
        }
        return int(w);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B,K;
        cin>>A>>B>>K;
        Solution ob;
        cout << ob.kthDigit(A,B,K) << endl;
    }
    return 0; 
}  // } Driver Code Ends