#include<algorithm>
#include<iostream>
using namespace std;
int main()
 {
	//code
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
	return 0;
}