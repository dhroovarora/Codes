#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int j = 2;
	    for(int i=0;i<n;i++){
	        cout<<j<<" ";
	        if(i%2 != 0){
	            j+=3;
	        }
	        else{
	            j++;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
