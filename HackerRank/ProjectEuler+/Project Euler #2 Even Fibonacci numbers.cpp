https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    unsigned long long sum=2,n,a=1,b=2,temp=0;
    cin>>n;
    while(temp < n){
        if(temp%2==0)
            sum+=temp;
        temp= a+b;
        a=b;
        b=temp;
        }
        cout<<sum<<endl;
    }
    return 0;
}