https://leetcode.com/problems/add-strings/




class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size() - 1;
        int j=num2.size() - 1;
        string g ="";
        int carry = 0;
        while(i>=0 || j>=0 || carry==1){
            long sum = 0;
            if(i>=0){
                sum += num1[i] - '0';
                i--;
            }
            if(j>=0){
                sum += num2[j] - '0';
                j--;
            }
            sum += carry;
            carry = sum/10;
            sum = sum%10;
            g = g + to_string(sum);
        }
        reverse(g.begin(),g.end());
        return g;
    }
};