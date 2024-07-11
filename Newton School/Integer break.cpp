https://my.newtonschool.co/playground/code/hvg4blcfa646




#include <iostream>
using namespace std;

int maxProd(int n) {
    // n equals to 2 or 3 must be handled explicitly
    if (n == 2 || n == 3) {
        return n - 1;
    }

    // Keep removing parts of size 3 while n is greater than 4
    int res = 1;
    while (n > 4) {
        n -= 3;
        res *= 3;  // Keep multiplying 3 to res
    }

    return n * res;
}

int main() {
    int n;
    cin >> n;
    cout << maxProd(n) << endl;
    return 0;
}