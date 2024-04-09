https://my.newtonschool.co/playground/code/j7gznvda1zw0




#include <iostream>
#include <vector>

using namespace std;

int countValidPermutations(int N, vector<int>& permutation, vector<bool>& used, int position) {
    // Base case: if all positions are filled
    if (position == N) {
        // Check if permutation satisfies the conditions
        for (int i = 0; i < N; ++i) {
            if (permutation[i] == i + 1) {
                return 0; // Invalid permutation
            }
        }
        return 1; // Valid permutation
    }

    int count = 0;
    for (int i = 1; i <= N; ++i) {
        if (!used[i]) {
            permutation[position] = i;
            used[i] = true;
            count += countValidPermutations(N, permutation, used, position + 1);
            used[i] = false;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    vector<int> permutation(N);
    vector<bool> used(N + 1, false);

    int totalPermutations = countValidPermutations(N, permutation, used, 0);
    cout << totalPermutations;

    return 0;
}