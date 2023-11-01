https://my.newtonschool.co/playground/code/h1whzu0h4hjn




#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string sounds;
    std::cin >> sounds;

    // Convert the input string to lowercase for case-insensitive comparison
    std::transform(sounds.begin(), sounds.end(), sounds.begin(), ::tolower);

    // Check if "meow" is present in the input string
    if (sounds.find("meow") != std::string::npos) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}