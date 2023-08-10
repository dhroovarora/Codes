https://www.codechef.com/problems/SEGM01




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    bool flag = 1 , fla = 0;
	    for(int i=0;i<s.size();i++){
	        if(fla == 1 && s[i] == '1'){
	            flag = 0;
	            break;
	        }
	        while(i<s.size() && s[i] == '1'){
	            fla = 1;
	            ++i;
	        }
	    }
	    (flag && fla) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}