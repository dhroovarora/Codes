https://www.codechef.com/problems/CHEFSTUD




#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    int count=0;
	    cin>>s;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='<' && s[i+1]=='>'){
	            count++;
	        }
	    }
	    std::cout << count << std::endl;
	}
	return 0;
}