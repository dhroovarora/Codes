https://www.codechef.com/START79B/problems/PRIMEFACT




#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int smallu(int x){
    for(int i=2;i<x;i++){
        if(isPrime(i)){
            if(x%i==0)
                return i;
        }
    }
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    
	    if(x%2==0){
	        if(y%2)
	            cout << (y-x)/2 + 1;
	        else
	            cout << (y-x)/2;
	    }
	    else{
	        int k = smallu(x);
	        x += k;
	            if(y%2)
	               cout << (y-x)/2 + 2;
	            else
	                cout << (y-x)/2 + 1;
	    }
	    cout << endl;
	}
	return 0;
}