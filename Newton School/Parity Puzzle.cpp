https://my.newtonschool.co/playground/code/b7i7k23cfnqy




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n,sum = 0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    int t = 0;
    bool flag = 0;
    for(int i=0;i<n-1;i++){
        t += a[i];
        sum -= a[i];
        if((t%2 && sum%2) || (!t%2 && !sum%2)){
            flag = 1;
            break;
        }
    }
    (flag) ? cout << "Yes" : cout << "No";
    return 0;
}