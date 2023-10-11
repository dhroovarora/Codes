https://www.codechef.com/practice/PCPPAR01/problems/CS2023_STK?tab=statement




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a=0,b=0;
	    int temp = 0;
	    for(int i=0;i<n;++i){
	        int q;
	        cin >> q;
	        if(q == 0){
	            a = max(a,temp);
	            temp = 0;
	        }
	        else{
	            ++temp;
	        }
	    }
	    a = max(a,temp);
	    temp = 0;
	    for(int i=0;i<n;++i){
	        int q;
	        cin >> q;
	        if(q == 0){
	            b = max(b,temp);
	            temp = 0;
	        }
	        else{
	            ++temp;
	        }
	    }
	    b = max(b,temp);
	    (a==b) ? cout << "DRAW" : (a>b) ? cout << "OM" : cout << "ADDY";
	    cout << endl;
	}
	return 0;
}