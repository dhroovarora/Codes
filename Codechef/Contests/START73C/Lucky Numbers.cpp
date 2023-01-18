https://www.codechef.com/START73C/problems/LUCKYN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    bool flag = 0;
	    while(x){
	        if(x%10==7){
	            flag = 1;
	            break;
	        }
	        else{
	            x /= 10;
	        }
	    }
	    if(flag)
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}