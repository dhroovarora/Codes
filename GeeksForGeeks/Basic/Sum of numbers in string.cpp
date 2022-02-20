// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int sum=0;string s="";
        for(int i=0;i<str.size();i++){
        int p=i;
        if(str[p]>='0'&&str[p]<='9'){
            s=str[p];
        while(str[p+1]>='0'&&str[p+1]<='9'){
            s=s+str[p+1];
            p++;
        }
        int q=stoi(s);
        sum=sum+q;
        }
        i=p;
    }
    return sum;
    
    
   }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends