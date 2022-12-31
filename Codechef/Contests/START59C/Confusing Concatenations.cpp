https://www.codechef.com/problems/CONFCAT




#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int fail = 0;
	    int c[n];
	    for(int i=0;i<n;i++){
	        cin>>c[i];
	    }
	    int max = 0;
	    for(int i=1;i<n;i++){
	        if(c[max] < c[i])
	            max = i;
	    }
	    if(max == 0){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<max<<endl;
	        for(int i=0;i<max;i++){
	            cout<<c[i]<<" ";
	        }
	        cout<<endl<<n-max<<endl;
	        for(int i= max;i<n;i++){
	            cout<<c[i]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
