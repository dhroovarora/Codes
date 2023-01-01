https://www.codechef.com/problems/MAXEXP




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
	    map<char,int> m;
	    int minus = 0;
	    int plus = 0;
	    string ans = "";
	    for(int i=0;i<n;i++){
	        if(s[i] == '-'){
	            minus++;
	        }
	        else if(s[i] == '+'){
	            plus++;
	        }
	        else{
	            m[s[i]]++;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(m['0']){
	            ans += '0';
	            m['0']--;
	        }
	        else if(m['1']){
	            ans += '1';
	            m['1']--;
	        }
	        
	        else if(m['2']){
	            ans += '2';
	            m['2']--;
	        }
	        
	        else if(m['3']){
	            ans += '3';
	            m['3']--;
	        }
	        
	        else if(m['4']){
	            ans += '4';
	            m['4']--;
	        }
	        
	        else if(m['5']){
	            ans += '5';
	            m['5']--;
	        }
	        
	        else if(m['6']){
	            ans += '6';
	            m['6']--;
	        }
	        
	        else if(m['7']){
	            ans += '7';
	            m['7']--;
	        }
	        
	        else if(m['8']){
	            ans += '8';
	            m['8']--;
	        }
	        
	        else if(m['9']){
	            ans += '9';
	            m['9']--;
	        }
	        
	        if(minus){
	            ans += '-';
	            minus--;
	        }
	        else if(plus){
	            ans += '+';
	            plus--;
	        }
	    }
	    reverse(ans.begin(),ans.end());
	    cout<<ans<<endl;
	}
	return 0;
}
