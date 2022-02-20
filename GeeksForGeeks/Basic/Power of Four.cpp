#include<iostream>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int isPowerOfFour(unsigned int n)
    {
      // Your code goes here
      int a=n,i=1,p=4;
      while(a>4){
          a = a/4;
          i++;
      }
      for(int j=1;j<i;j++){
          p = p*4;
      }
      if(p == n){
          return 1;
      }
      else if(n==1){
          return 1;
      }
      else{
          return 0;
      }
    }
};

// { Driver Code Starts.

/*Driver program to test above function*/
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
Solution ob;
if(ob.isPowerOfFour(n))
	cout<<1<<endl;
else
	cout<<0<<endl;
}
//getchar();
}
  // } Driver Code Ends