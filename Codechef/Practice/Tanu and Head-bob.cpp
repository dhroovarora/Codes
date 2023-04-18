https://www.codechef.com/problems/HEADBOB




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    int i = count(str.begin(), str.end(), 'I');
        int y = count(str.begin(), str.end(), 'Y');
	    
	    if(i)
	        cout << "INDIAN";
	    else if(y)
	        cout << "NOT INDIAN";
	    else
	        cout << "NOT SURE";
	    cout << endl;
	}
	return 0;
}