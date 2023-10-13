https://www.codechef.com/practice/PCPPST01/problems/BLOBBYVOLLEY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    char i = 'A';
	    int a=0,b=0;
	    for(int j=0;j<s.size();++j){
	        if(s[j] == i){
	            if(i=='A')
	                ++a;
	            else
	                ++b;
	        }
	        else{
	            i = s[j];
	        }
	    }
	    cout << a << " " << b << endl; 
	}
	return 0;
}