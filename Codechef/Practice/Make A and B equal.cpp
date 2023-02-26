https://www.codechef.com/problems/EQUALISE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    bool flag = 0;
	    if(a > b){
	        while(b <= a){
	            if(b == a){
	                flag =1;
	                break;
	            }
	            b *= 2;
	        }
	    }
	    else{
	        while(a <= b){
	            if(b == a){
	                flag = 1;
	                break;
	            }
	            a *= 2;
	        }
	    }
	    if(flag)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}