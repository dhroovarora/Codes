https://my.newtonschool.co/playground/code/szdcb11awpw4




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int xorSum(int arr[], int n) 
{ 
	int bits = 0; 
	for (int i=0; i < n; ++i) 
		bits |= arr[i]; 
	int ans = bits * pow(2, n-1); 
	return ans; 
}
int main() {
	// Your code here
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin >> arr[i];
    cout << xorSum(arr,n);
    return 0;
}