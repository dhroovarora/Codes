https: // my.newtonschool.co/playground/code/t2qt9k9wyie3




#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        // Maximum number of cows we can have
        int maxCows = N / 4;
        // Remaining legs after using the maximum number of cows
        int remainingLegs = N % 4;
        // Minimum number of animals is the number of cows + number of chickens from remaining legs
        int minAnimals = maxCows + (remainingLegs / 2);
        cout << minAnimals << endl;
    }
    return 0;
}