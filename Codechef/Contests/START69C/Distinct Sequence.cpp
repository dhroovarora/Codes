https://www.codechef.com/START69C/problems/DISTINCTSEQ




#include <bits/stdc++.h>
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
	    int count = 0;
	    for(int i=0;i<(2*n);i++){
	        if(s[i] == '1')
	            count++;
	        else
	            count--;
	    }
	    if(count == (2*n) || count == (-2)*(n))
	        cout<<-1;
	    else{
	        vector<int> v;
	        for(int i = 0;i<(2*n);i++){
	            if(s[i] == '1'){
	                v.push_back(i); 
	            }
	            if(v.size() == n)
	                break;
	        }
	        if(v.size() != n){
	            for(int i=0;i<2*n;i++){
	                if(s[i] == '0'){
	                    v.push_back(i);
	                    if(v.size()==n){
	                        break;
	                    }
	                }
	            }
	        }
	        sort(v.begin(),v.end());
	        for(int i=0;i<n;i++){
	            cout<<v[i] + 1;
	            if(i != n-1){
	                cout<<" ";
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
