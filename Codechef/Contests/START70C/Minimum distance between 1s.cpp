https://www.codechef.com/problems/MINDIST1




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a[n];
	    int k = 0;
	    for(int i=0;i<n;i++){
	        if(s[i] == '1'){
	            a[k++] = i;
	        }
	    }
	    for(int i=0;i<k-1;i++){
	        a[i] = a[i+1] - a[i];
	    }
	    bool flag = 0;
	    for(int i=0;i<k-1;i++){
	        if(a[i]%2){
	            flag = 1;
	            break;
	        }
	    }
	    if(flag)
	        cout<<1<<endl;
	    else
	        cout<<2<<endl;
	}
	return 0;
}
