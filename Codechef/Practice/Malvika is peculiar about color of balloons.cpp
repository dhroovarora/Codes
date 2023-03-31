https://www.codechef.com/problems/CHN09




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int a = 0;
	    int b = 0;
	    for(int i=0;i<s.size();i++){
	        if(s[i] == 'a')
	            a++;
	        else
	            b++;
	    }
	    cout << min(a,b) << endl;
	}
	return 0;
}