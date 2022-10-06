https://www.codechef.com/problems/SPECIALITY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x>y){
	        if(x>z){
	            cout<<"Setter";
	        }
	        else{
	            cout<<"Editorialist";
	        }
	    }
	    else{
	        if(y>z){
	            cout<<"Tester";
	        }
	        else{
	            cout<<"Editorialist";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
