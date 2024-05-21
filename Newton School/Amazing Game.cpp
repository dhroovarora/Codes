https://my.newtonschool.co/playground/code/s4eeip00wh16




#include <iostream>
#include <vector>
#include <cmath>

// Function to check whether the number is prime or not
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Function to calculate the number of prime factors
int prime_factors(int n) {
    int ans = 0;
    while (n % 2 == 0) {
        ans++;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            ans++;
            n /= i;
        }
    }
    if (n > 2) {
        ans++;
    }
    return ans;
}

// Function to determine which player will win
bool brain_game(const std::vector<int>& nums) {
    std::vector<int> a(1005, 0);
    // Pre-compute the prime factors for numbers from 2 to 1000
    for (int i = 2; i <= 1000; ++i) {
        if (!is_prime(i)) {
            a[i] = prime_factors(i) - 1;
        }
    }
    int x = 0;
    // Calculate XOR of prime factors for each number in nums
    for (int num : nums) {
        x ^= a[num];
    }
    // If XOR result is 0, player B wins; otherwise, player A wins
    return x != 0;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    // Check the winner and print the result
    if (brain_game(nums)) {
        std::cout << "A" ;
    } else {
        std::cout << "B" ;
    }

    return 0;
}