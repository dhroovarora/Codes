https://www.codechef.com/problems/SUSSTR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    string s;
	    cin>>n>>s;
	    string t = "";
	    int i=0;
	    int j = n-1;
	    while(i<j){
	        if(s[i] == '0'){
	            t = '0' + t;
	        }
	        else{
	            t = t + '1';
	        }
	        if(s[j] == '1'){
	            t = '1' + t;
	        }
	        else{
	            t = t + '0';
	        }
	        i++;
	        j--;
	    }
	    if(n%2){
	        if(s[n/2] == '1'){
	            t = t + '1';
	        }
	        else{
	            t = '0' + t;
	        }
	    }
	    cout<<t<<endl;
	}
	return 0;
}
