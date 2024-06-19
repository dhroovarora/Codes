https://my.newtonschool.co/playground/code/p3ez1tixmz15




#include <iostream>
using namespace std;

int main() {
    long long n, b, m;
    cin >> n >> b >> m;
    
    long long ans = 0;
    while (n > 0) {
        long long p;
        if (n % 2 == 0) {
            p = n / 2;
            n = n - p;
        } else {
            p = (n + 1) / 2;
            n = n - p;
        }
        
        ans += (p*m);
        if (n != 0) {
            ans += b;
        }
        
        m *= 2;
    }
    
    cout << ans;
    return 0;
}