https://www.codechef.com/problems/XORMAX




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string a,b;
	    cin >> a >> b;
	    int count11=0;
	    int count10=0;
	    int count21=0;
	    int count20=0;
	    for(int i=0;i<a.size();i++){
	        if(a[i] == '1')
	            count11++;
	        else
	            count10++;
	        if(b[i] == '1')
	            count21++;
	        else
	            count20++;
	    }
	    string s;
	    int len = min(count11,count20) + min(count21,count10);
	    for(int i=0;i<len;i++)
	        s += '1';
	    for(int i=0;i<a.size()-len;i++)
	        s += '0';
	    cout << s << endl;
	}
	return 0;
}
