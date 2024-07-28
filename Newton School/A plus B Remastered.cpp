https://my.newtonschool.co/playground/code/b86y7ehf2b8o




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;++i)
            cin >> a[i];
        for(int i=0;i<n;++i)
            cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);
        int sum = a[0] + b[n-1];
        bool flag = 0;
        for(int i=0;i<n;++i){
            int s = a[i] + b[n-i-1];
            if(s != sum){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout << -1;
        }
        else{
            for(int i=0;i<n;++i)
                cout << a[i] << ' ';
            cout << endl;
            for(int i=n-1;i>=0;--i)
                cout << b[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}