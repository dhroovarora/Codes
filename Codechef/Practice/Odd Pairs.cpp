https://www.codechef.com/problems/ODDPAIRS




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long n;
        cin>>n;
        long long odd_a,odd_b,even_a,even_b;
        if (n%2==0)
        {
            odd_a=n/2;
            odd_b=n/2;
            even_a=n/2;
            even_b=n/2;
        }
        else{
            odd_a=n/2+1;
            odd_b=n/2+1;
            even_a=n/2;
            even_b=n/2;
        }
        long long ans=0;
        ans=(odd_a*even_b)+(even_a*odd_b);
        cout<<ans<<endl;
    }
	return 0;
}