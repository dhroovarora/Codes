https://www.codechef.com/problems/PLAYPIAN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int c = 0;
	    bool flag = 1;
	    for(int i=0;i<s.size();i = i+2){
	        if(s[i] == s[i+1]){
	            flag = 0;
	            break;
	        }
	    }
	    if(flag)
	        cout << "yes";
	    else
	        cout << "no";
	    cout << endl;
	}
	return 0;
}