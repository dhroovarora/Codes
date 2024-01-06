https://my.newtonschool.co/playground/code/j9zzio5sbjbj




#include <bits/stdc++.h>
using namespace std;
int countNewtonOccurrences(const string& s) {
    // Count occurrences of each required character
    unordered_map<char, int> counts{
        {'n', 0},
        {'e', 0},
        {'w', 0},
        {'t', 0},
        {'o', 0}
    };

    for (char ch : s) {
        auto it = counts.find(ch);
        if (it != counts.end()) {
            it->second++;
        }
    }

    // Calculate the minimum count among the required characters
    int minCount = min_element(counts.begin(), counts.end(),
        [](const auto& a, const auto& b) {
            return a.second < b.second;
        })->second;

    // The number of "newton" is determined by the minimum count
    return minCount;
}

int main() {
    string s;
    cin >> s;
    int result = countNewtonOccurrences(s);
    cout << result;

    return 0;
}