https://my.newtonschool.co/playground/code/rzea5t1vu46u




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Compute the prefix sums
    vector<int> prefixSum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        prefixSum[i + 1] = prefixSum[i] + A[i];
    }

    int minTime = INT_MAX;

    // Evaluate the maximum time for each split point
    for (int i = 0; i <= N; i++) {
        int time1 = prefixSum[i]; // Time for the first processor
        int time2 = prefixSum[N] - prefixSum[i]; // Time for the second processor
        int maxTime = max(time1, time2);
        minTime = min(minTime, maxTime);
    }

    cout << minTime;

    return 0;
}