#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int divisibleBy5(string N){
        // code here 
        int a;
        a = N.size();
        if(N[a-1] == '0' || N[a-1] == '5')
        {
            return 1;
        }
        else{
            return 0;
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
        string N;
        cin >> N;
        Solution ob;
        cout << ob.divisibleBy5(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends