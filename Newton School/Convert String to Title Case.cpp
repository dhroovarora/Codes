https://my.newtonschool.co/playground/code/9xhzr79hsm27




#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

int main() {
    std::string s;
    std::getline(std::cin, s);  // Take input and remove any leading or trailing whitespace
    std::stringstream ss(s);
    std::vector<std::string> ns;
    std::string word;

    // Split the input sentence into individual words and iterate through each word
    while (ss >> word) {
        if (std::all_of(word.begin(), word.end(), ::isupper)) {
            ns.push_back(word);  // If the word is entirely uppercase, append it as is
        } else {
            // Capitalize the first letter and make the rest of the letters lowercase
            word[0] = toupper(word[0]);
            std::transform(word.begin() + 1, word.end(), word.begin() + 1, ::tolower);
            ns.push_back(word);
        }
    }

    // Join the list into a string with spaces and print
    for (size_t i = 0; i < ns.size(); ++i) {
        if (i != 0) std::cout << " ";
        std::cout << ns[i];
    }
    std::cout << std::endl;

    return 0;
}
