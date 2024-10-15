https://my.newtonschool.co/playground/code/vg3qcie3xdtr




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    int a = 0;
    int ans = 0;
    for(int i=n-1;i>=0;--i){
        if(arr[i] >= a){
            ++ans;
            a = arr[i];
        }
    }
    cout << ans;
    return 0;
}