https://www.codechef.com/problems/PERFECTTRIO




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    if(a>b){
	        if(a>c){
	            if(a == b + c)
	                cout << "YES";
	            else
	                cout <<"NO";
	        }
	        else{
	            if(c == a + b)
	                cout << "YES";
	            else
	                cout <<"NO";
	        }
	    }
	    else{
	        if(b>c){
	            if(b == a + c)
	                cout <<" YES";
	            else
	                cout <<"NO";
	       }
	        else{
	            if(c == a + b)
	                cout << "YES";
	            else
	                cout <<"NO";
	        }
	    }
	    cout << endl;
	}
	return 0;
}
