https://my.newtonschool.co/playground/code/c25syr3drw10




#include <iostream>
#include <vector>

using namespace std;

int count_elimination_ways(std::string row) {
    std::vector<std::pair<int, char>> segments;
    char current_color = row[0];
    int current_length = 1;

    for (int i = 1; i < row.length(); ++i) {
        if (row[i] == current_color) {
            current_length += 1;
        } else {
            segments.push_back(std::make_pair(current_length, current_color));
            current_color = row[i];
            current_length = 1;
        }
    }

    segments.push_back(std::make_pair(current_length, current_color));

    int m = segments.size();

    // Criteria 1: The total number of segments m is odd
    if (m % 2 == 0) {
        return 0;
    }

    int middle_index = m / 2;

    // Criteria 2: The number of balls in the middle segment should be at least 2
    if (segments[middle_index].first == 1) {
        return 0;
    }

    // Criteria 3: Check all pairs of segments symmetrically
    for (int i = 1; i <= middle_index; ++i) {
        int left_index = middle_index - i;
        int right_index = middle_index + i;

        if (left_index >= 0 && right_index < m &&
            (segments[left_index].first + segments[right_index].first >= 3) &&
            segments[left_index].second == segments[right_index].second) {
            continue;
        } else {
            return 0;
        }
    }

    return segments[middle_index].first + 1;
}

int main() {
    std::string row;
    std::cin >> row;

    int result = count_elimination_ways(row);

    std::cout << result;

    return 0;
}