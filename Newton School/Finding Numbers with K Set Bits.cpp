https://my.newtonschool.co/playground/code/px6q3635442q




#include <iostream>

int highestPowerof2(int n) {
    int res = 0;
    while (n) {
        n >>= 1;
        ++res;
    }
    return res - 1;
}

bool checkBits(int n, int k) {
    return k <= 1 || (highestPowerof2(n+1)) >= k;
}

int main() {
    int N, K;
    std::cin >> N >> K;
    if (checkBits(N, K))
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}