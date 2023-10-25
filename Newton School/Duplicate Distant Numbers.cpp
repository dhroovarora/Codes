https://my.newtonschool.co/playground/code/vqjdqqn3y7ry




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
    int k;
    cin >> k;
    bool flag = 0;
    for(int i=0;i<n-1;++i){
        int a = arr[i];
        for(int j=1;j<=k;++j){
            if(i+j > n-1)
                break;
            if(arr[j+i] == a){
                flag = 1;
                break;
            }
        }
        if(flag)
            break;
    }
    if(flag)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}