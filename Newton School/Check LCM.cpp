https://my.newtonschool.co/playground/code/9vu0csftqhyk




#include <iostream>
#include <algorithm>
using namespace std;

// Function to calculate the greatest common divisor
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the least common multiple
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

// Function to find the maximum LCM of three distinct integers <= n
long long MaxLCM(int n) {
    long long result = 0;

    // Check the combinations
    long long comb1 = lcm(lcm(n, n-1), n-2);
    long long comb2 = lcm(lcm(n, n-1), n-3);
    long long comb3 = lcm(lcm(n-1, n-2), n-3);

    // Find the maximum LCM
    result = max(comb1, max(comb2, comb3));

    return result;
}

int main() {
    int n;
    cin >> n;
    cout << MaxLCM(n) << endl;
    return 0;
}
