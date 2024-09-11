https://my.newtonschool.co/playground/code/z9rkejp2aqu5




#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_map<int, int> freq;

        // Reading the array and calculating frequency of each element
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            freq[A[i]]++;
        }

        // Find the maximum frequency
        int max_frequency = 0;
        for (auto &entry : freq) {
            if (entry.second > max_frequency) {
                max_frequency = entry.second;
            }
        }

        // Minimum number of operations is N - max_frequency
        cout << N - max_frequency << endl;
    }
    
    return 0;
}