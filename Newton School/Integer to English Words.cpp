https://my.newtonschool.co/playground/code/5hjl2gtb1aq1




#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> ones = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
std::vector<std::string> teens = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
std::vector<std::string> tens = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

std::string convertToWords(int num) {
    if (num == 0) {
        return "Zero";
    }

    std::string result = "";

    // Process billions
    if (num >= 1000000000) {
        result += convertToWords(num / 1000000000) + " Billion ";
        num %= 1000000000;
    }

    // Process millions
    if (num >= 1000000) {
        result += convertToWords(num / 1000000) + " Million ";
        num %= 1000000;
    }

    // Process thousands
    if (num >= 1000) {
        result += convertToWords(num / 1000) + " Thousand ";
        num %= 1000;
    }

    // Process hundreds
    if (num >= 100) {
        result += ones[num / 100] + " Hundred ";
        num %= 100;
    }

    // Process tens and ones
    if (num > 0) {
        if (num >= 11 && num <= 19) {
            result += teens[num - 10];
        } else {
            std::string temp = tens[num/10];
            if(temp.size())
                result += temp;
            std::string temp2 = ones[num%10];
            if(temp.size() && temp2.size())
                result += " ";
            if(temp2.size())
                result += temp2;
        }
    }

    return result;
}

int main() {
    int num;
    std::cin >> num;

    std::string result = convertToWords(num);
    std::cout << result;

    return 0;
}