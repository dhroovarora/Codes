https://www.codechef.com/problems/FLOW006




//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int sum=0;
        
        while(n>0)
        {
            sum+=(n%10);
            n/=10;
        }
        
        cout<<sum<<"\n";
        
    }
	return 0;
}
