https://my.newtonschool.co/playground/code/qauu26qaro1v




#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canSortArray(vector<int>& arr) {
    // Separate even and odd elements
    vector<int> evenElements, oddElements;
    for (int x : arr) {
        if (x % 2 == 0) {
            evenElements.push_back(x);
        } else {
            oddElements.push_back(x);
        }
    }

    // Sort the even and odd element vectors
    sort(evenElements.begin(), evenElements.end());
    sort(oddElements.begin(), oddElements.end());

    // Merge the sorted even and odd vectors
    vector<int> sortedArr;
    int evenIdx = 0, oddIdx = 0;
    for (int x : arr) {
        if (x % 2 == 0) {
            sortedArr.push_back(evenElements[evenIdx]);
            evenIdx++;
        } else {
            sortedArr.push_back(oddElements[oddIdx]);
            oddIdx++;
        }
    }

    // Check if the merged vector is non-decreasing
    for (int i = 1; i < sortedArr.size(); i++) {
        if (sortedArr[i] < sortedArr[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool result = canSortArray(arr);
    
    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}