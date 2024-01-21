https://my.newtonschool.co/playground/code/04pvrt8pfzc0




#include <iostream>

using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    long long totalCoins = a + b + c + n;
    (totalCoins % 3 == 0 && (totalCoins - a) >= a && (totalCoins - b) >= b && (totalCoins - c) >= c) ? cout << "YES" : cout << "NO";
    return 0;
}