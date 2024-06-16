https: // my.newtonschool.co/playground/code/qcc99m7gxsu1




#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    // Number of odd numbers from 1 to N
    long long O = (N + 1) / 2;

    // Number of even numbers from 1 to N
    long long E = N / 2;

    // Number of pairs (A, B) such that A + B is odd
    long long result = 2 * O * E;

    // Output the result
    cout << result << endl;

    return 0;
}