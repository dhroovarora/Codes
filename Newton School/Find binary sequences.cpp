https://my.newtonschool.co/playground/code/cdpabdzoa5y8




// A Naive Recursive C++ program to count even
// length binary sequences such that the sum of
// first and second half bits is same
#include<bits/stdc++.h>
using namespace std;

// diff is difference between sums first n bits
// and last n bits respectively
 int mod = 1e9+7;

 long long int BinaryExponent(long long int x,long long int n,long long int M)

    {

        if(n==0) return 1;

        if(n%2==0) {

            x=((x%M)*(x%M))%M;

            return BinaryExponent(x,n/2,M);

        }

        else{

            return ((x%M)*(BinaryExponent(x,n-1,M)%M))%M;

        }

    }

 

 int ModularInv(int i){

     return BinaryExponent(i,mod-2,mod);

 }

 int Combination(int n,int r){

     long long num = 1, den = 1;

     for(int i=n;i>r;i--){

         num=(num*i)%mod;

     }

     for(int i=r;i>=1;i--){

         den=(den*ModularInv(i))%mod;

     }

     return (num*den)%mod;

 }

 int compute_value(int n)

 {

     int ans = 0;

     ans = Combination(2*n,n);

     return ans;

 }

// Driver program
int main()
{
	int n;
    cin >> n;
	cout << compute_value(n);
	return 0;
}