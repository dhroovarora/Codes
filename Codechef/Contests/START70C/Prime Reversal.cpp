https://www.codechef.com/problems/PRIMEREVERSE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    string a;
	    string b;
	    cin>>n;
	    cin>>a>>b;
	    int count  = 0;
	    for(int i=0;i<n;i++){
	        if(a[i] == '0')
	            count++;
	        if(b[i] == '0')
	            count--;
	    }
	    if(count)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}
