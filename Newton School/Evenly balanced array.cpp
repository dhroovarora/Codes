https://my.newtonschool.co/playground/code/4xx480avv870




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
bool check(int a){
    int o = 0 , e = 0;
    for(int i=1;i<=sqrt(a);++i){
        if(a%i==0){
            if(i%2)
                ++o;
            else
                ++e;
            if(i != sqrt(a)){
                if((a/i)%2)
                    ++o;
                else
                    ++e;
            }
        }
    }
    if(e<o)
        return 0;
    return 1;
}
int main() {
	// Your code here
    int n;
    cin >> n;
    int ans = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(check(a)){
            ans += a;
        }
    }
    cout << ans;
    return 0;
}