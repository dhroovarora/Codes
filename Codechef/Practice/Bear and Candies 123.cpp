https://www.codechef.com/problems/CANDY123




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    int A = 1;
	    int B = 2;
	    int sum1 = 0;
	    int sum2 = 0;
	    while(true){
	        if(sum1 + A > a){
	            cout << "Bob";
	            break;
	        }
	        sum1 += A;
	        A += 2;
	        if(sum2 + B > b){
	            cout << "Limak";
	            break;
	        }
	        sum2 += B;
	        B += 2;
	    }
	    cout << endl;
	}
	return 0;
}