https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/




#include <iostream>
using namespace std;
int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	if(arr[n-1]%10 == 0)
		cout<<"Yes";
	else
		cout<<"No";
}