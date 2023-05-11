https://www.codechef.com/START49D/problems/HIGHFREQ




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        m[arr[i]]++;
	    }
	    int a =0,b=0;
	    for(auto i:m){
	        if(a<i.second){
	            if(b<i.second){
	                a = b;
	                b = i.second;
	            }
	            else{
	                a = i.second;
	            }
	        }
	    }
	    if(b/2<a){
	        cout<<a<<endl;
	    }
	    else{
	        if(b%2){
	            cout<<b/2+1<<endl;
	        }
	        else{
	            cout<<b/2<<endl;
	        }
	    }
	    
	}
	return 0;
}