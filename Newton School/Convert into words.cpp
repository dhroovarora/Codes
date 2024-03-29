https://my.newtonschool.co/playground/code/qi3itozawpe6




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string LESS_THAN_20[20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string TENS[10] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string THOUSANDS[4] = {"", "Thousand", "Million", "Billion"};


string helper(int num) {
    if (num == 0)
        return "";
    else if (num < 20)
        return LESS_THAN_20[num] + " ";
    else if (num < 100)
        return TENS[num / 10] + " " + helper(num % 10);
    else
        return LESS_THAN_20[num / 100] + " Hundred " + helper(num % 100);
}
string numberToWords(int num) {
    if (num == 0) 
        return "Zero";

    int i = 0;
    string words = "";
    while (num > 0) {
        if (num % 1000 != 0)
    	    words = helper(num % 1000) +THOUSANDS[i] + " " + words;
    	num /= 1000;
    	i++;
    }
    return words;
}

int main() {
	// Your code here
    int n;
    cin >> n;
    cout << numberToWords(n);
    return 0;
}