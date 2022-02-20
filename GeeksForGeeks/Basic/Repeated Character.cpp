#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        if(s.size() == 1){
            return '#';
        }
        for(int i=1;i<s.size();i++){
            if(s[i] == s[0]){
                return s[0];
            }
        }
        s.erase(s.begin());
        char a = firstRep(s);
        return a;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}


  // } Driver Code Ends 