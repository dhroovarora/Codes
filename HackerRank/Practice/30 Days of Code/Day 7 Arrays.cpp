https://www.hackerrank.com/challenges/30-arrays/problem?isFullScreen=true




#include<iostream>
using namespace std;

int main()
{
    int n , a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    for(int i=n-1;i>=0;i--)
    cout<<a[i]<<" ";
    
    return 0;
}