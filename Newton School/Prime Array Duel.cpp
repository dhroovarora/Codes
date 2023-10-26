https://my.newtonschool.co/playground/code/253qf2xe1hya




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool isPrime(int n){
    if(n==1)
        return 0;
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main() {
	// Your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i)
        cin >> a[i];
    sort(a,a+n);
    int r=0,t=0;
    bool flag = 0;
    for(int i=n-1;i>=0;--i){
        if(isPrime(a[i])){
            if(flag){
                t += a[i];
                flag = 0;
            }
            else{
                r += a[i];
                flag = 1;
            }
        }
    }
    if(t > r)
        cout << "Tia";
    else if(t < r)
        cout << "Ravi";
    else
        cout << "Draw";
    return 0;
}