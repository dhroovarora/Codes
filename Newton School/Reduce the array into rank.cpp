https://my.newtonschool.co/playground/code/pu8cqnpi5u9n




#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to reduce the array elements
vector<int> reduce_array(int n, vector<int>& arr) {
    // Create a vector of pairs (element, index)
    vector<pair<int, int>> pairs;
    for (int i = 0; i < n; ++i) {
        pairs.push_back(make_pair(arr[i], i));
    }

    // Sort the vector of pairs based on the array elements
    sort(pairs.begin(), pairs.end());

    // Assign the reduced values to the original array
    vector<int> reduced_array(n, 0);
    for (int i = 0; i < n; ++i) {
        reduced_array[pairs[i].second] = i;
    }

    return reduced_array;
}

int main() {
    // Input
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Output
    vector<int> result = reduce_array(n, arr);
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}