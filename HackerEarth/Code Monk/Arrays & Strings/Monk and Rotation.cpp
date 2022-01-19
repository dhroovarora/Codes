#include <iostream>

using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
		int a[100001];
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
        for(int i=n-(k%n);i<n;i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<n-(k%n);i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
	}
}
