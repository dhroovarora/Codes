https://www.codechef.com/problems/PRB01




#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    isPrime(n) ? cout << "yes" : cout <<"no";
	    cout << endl;
	}
	return 0;
}