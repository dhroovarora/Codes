
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
    string add(string str1, string str2)
    {
        int i = str1.size() - 1;
        int j = str2.size() - 1;
        
        int carry = 0;
        
        string res;
        
        while(i >= 0 and j >= 0)
        {
            int digit1 = str1[i] - '0'; 
            int digit2 = str2[j] - '0'; 
            
            int sum = (digit1 + digit2 + carry) % 10;
            carry = (digit1 + digit2 + carry) / 10;
            
            res.push_back(sum + '0');
            
            i--;
            j--;
        }  
         while(i >= 0)
        {
            int digit1 = str1[i] - '0';
            
            int sum = (digit1 + carry) % 10;
            carry = (digit1 + carry) / 10;
            
            res.push_back(sum + '0');
            
            i--;
        }
        
        while(j >= 0)
        {
            int digit2 = str2[j] - '0'; 
            
            int sum = (digit2 + carry) % 10;
            carry = (digit2 + carry) / 10;
            
            res.push_back(sum + '0');
            
            j--;
        }
        
        if(carry)
        {
            res.push_back(carry + '0');
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s1, s2;
		cin >> s1 >> s2;
		Solution ob;
		string ans = ob.add(s1, s2);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends