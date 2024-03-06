https://my.newtonschool.co/playground/code/mmdnyytv9tqj




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i)
        cin >> a[i];
    sort(a,a+n);
    int sum = 0;
    for(int i=0;i<n-1;++i){
        sum += (a[i+1] - a[i]);
    }
    cout << sum;
    return 0;
}
