https://my.newtonschool.co/playground/code/epwuhu4a03sy




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int fact(int n){
    if(n<=2)
        return n;
    return n * fact(n-1);
}
int main() {
	// Your code here
    int n;
    cin  >> n;
    long long ans = 0;
    while(n){
        if(n%10 == 0)
            ++ans;
        else
            ans += fact(n%10);
        n /= 10;
    }
    cout << ans;
    return 0;
}