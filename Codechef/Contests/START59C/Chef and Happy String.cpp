https://www.codechef.com/problems/HAPPYSTR




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int c = 0;
	    for(int i=0;i<s.size() - 3;i++){
	        string temp = s.substr(i,i+3);
	        for(int j=0;j<3;j++){
	            if(temp[j] == 'a' || temp[j] == 'e' ||temp[j] == 'i' ||temp[j] == 'o' ||temp[j] == 'u'){
	                c++;
	            }
	        }
	        if(c==3){
	            break;
	        }
	        else{
	            c = 0;
	        }
	    }
	    if(c){
	        cout<<"Happy"<<endl;
	    }
	    else{
	        cout<<"Sad"<<endl;
	    }
	    
	}
	return 0;
}
