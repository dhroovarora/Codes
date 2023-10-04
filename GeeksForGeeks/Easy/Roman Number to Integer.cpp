https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1




class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char, int> romanToInteger = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int num = 0;
        
        int n = str.size();
        for(int i=0;i<n;i++){
            if(i < n-1 && romanToInteger[str[i]] < romanToInteger[str[i + 1]]){
                num -= romanToInteger[str[i]];
            }
            else {
                num += romanToInteger[str[i]];
            }
        }
        
        return num;
    }
};