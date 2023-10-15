https://www.codechef.com/practice/PCPPST01/problems/HAPPYSTR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int n = s.size();
	    bool flag = 0;
	    for(int i=0;i<n;i++){
	        int q = 0;
	        while(i<n && (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')){
	            ++q;
	            ++i;
	        }
	        if(q>2){
	            flag = 1;
	            break;
	        }
	    }
	    (flag) ? cout << "Happy" : cout << "Sad";
	    cout << endl;
	}
	return 0;
}