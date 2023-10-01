https://my.newtonschool.co/playground/code/m277vezbcxrv




#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int K;
    cin >> K;

    long long remainder = 0;
    int position = 1;
    unordered_set<long long> remainders;

    while (position <= K + 1) {
        remainder = (remainder * 10 + 7) % K;

        if (remainder == 0) {
            cout << position << endl;
            return 0;
        }

        if (remainders.find(remainder) != remainders.end()) {
            break;
        }

        remainders.insert(remainder);
        position++;
    }

    cout << -1 << endl;
    return 0;
}