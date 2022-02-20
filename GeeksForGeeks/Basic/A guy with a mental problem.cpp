#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here  
        long long q=0;
        long long w=0;
        for(int i=0;i<n;i=i+2){
            q = q + a[i];
        }
        for(int i=1;i<n;i=i+2){
            q = q + b[i];
        }
        for(int i=0;i<n;i=i+2){
            w = w + b[i];
        }
        for(int i=1;i<n;i=i+2){
            w = w + a[i];
        }
        if(q<w){
            return q;
        }
        return w;
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends