https://my.newtonschool.co/playground/code/b40p0zdl5k0y




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int prefix_sum = 0;
        unordered_map<int, int> first_occurrence;
        first_occurrence[0] = -1;  
        int max_length = 0;
        
        for (int i = 0; i < n; ++i) {
            prefix_sum += arr[i];
            int parity = prefix_sum % 2;
            
            if (first_occurrence.find(parity) != first_occurrence.end()) {
                int length = i - first_occurrence[parity];
                max_length = max(max_length, length);
            } else {
                first_occurrence[parity] = i;
            }
        }

        cout << max_length << endl;
    }

    return 0;
}