https://my.newtonschool.co/playground/code/0bwl2ztz4yfa




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int maxSumNonAdjacent(int arr[], int n) {
    if (n <= 0) return 0;

    vector<int> dp(n + 1, 0); // dp[i] will store the maximum sum of non-adjacent elements ending at index i

    // Base cases
    dp[1] = max(arr[0], 0); // If there is only one element, the maximum sum is the maximum of that element and 0

    // Build up the dp array
    for (int i = 2; i <= n; ++i) {
        // At each step, we have two choices: either include the current element and exclude the previous one,
        // or exclude the current element and take the maximum sum from the previous elements
        dp[i] = max(arr[i - 1] + dp[i - 2], dp[i - 1]);
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << maxSumNonAdjacent(arr, n);
    return 0;
}