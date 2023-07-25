https://www.codechef.com/problems/BSCOST




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,y;
	    cin >> n >> x >> y;
	    string s;
	    cin >> s;
	    bool flag1 = 0,flag2 = 0;
	    for(int i=0;i<n;i++){
	        if(s[i] == '1')
	            flag1 = 1;
	        else if(s[i] == '0')
	            flag2 = 1;
	        if(flag1 && flag2)
	            break;
	    }
	    if(flag1 && flag2)
	        cout << min(x,y) << endl;
	    else
	        cout << 0 << endl;
	}
	return 0;
}