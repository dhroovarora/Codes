#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int isPowerOfAnother(long long X, long long Y){
        // code here
        if(X==1){
            return Y==X;
        }
        if(Y==1){
            return 1;
        }
        for(int i=1;i<Y;i++){
            if(pow(X,i)==Y){
                return 1;
            }
        }
        return 0;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int X, Y;
        cin >> X >> Y;
        Solution ob;
        cout << ob.isPowerOfAnother(X,Y) << endl;
    }
    return 0; 
}   // } Driver Code Ends