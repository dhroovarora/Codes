https://my.newtonschool.co/playground/code/fubz8yasimuw




#include <iostream>
#include <vector>

using namespace std;

int xor_of_subarrays(int n, vector<int>& arr) {
    int result = 0;

    for (int i = 0; i < n; ++i) {
        int count_ending_at_i = (i + 1) * (n - i);
        if (count_ending_at_i % 2 != 0) {
            result ^= arr[i];
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int output = xor_of_subarrays(n, arr);
    cout << output << endl;

    return 0;
}