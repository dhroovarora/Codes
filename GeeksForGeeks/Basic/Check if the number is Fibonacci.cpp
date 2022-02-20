#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string checkFibonacci(int N){
        // code here 
        int s = 5 * N*N - 4;
        int p = 5 * N*N + 4;
        if((int)sqrt(s)*(int)sqrt(s) == s || (int)sqrt(p)*(int)sqrt(p) == p){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends