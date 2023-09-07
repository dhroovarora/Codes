https://my.newtonschool.co/playground/code/tx8suo4l9936




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum%2)
        cout << "No";
    else{
        int p = 0;
        bool flag = 0;
        for(int i=0;i<n;i++){
            p += a[i];
            if(p == sum/2){
                flag = 1;
                break;
            }
        }
        (flag) ? cout << "Yes" : cout << "No";
    }
    return 0;
}