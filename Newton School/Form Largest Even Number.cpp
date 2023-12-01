https://my.newtonschool.co/playground/code/ji376s1cj3au




#include <iostream>
#include <algorithm>

int main() {
    long long N;
    std::cin >> N;

    std::string N_str = std::to_string(N);

    std::sort(N_str.rbegin(), N_str.rend());

    bool found = false;
    do {
        if ((N_str.back() - '0') % 2 == 0) {
            found = true;
            break;
        }
    } while (std::prev_permutation(N_str.begin(), N_str.end()));

    if (found) {
        std::cout << N_str;
    } else {
        std::cout << -1;
    }

    return 0;
}