https://leetcode.com/problems/palindrome-number/



class Solution {
public:
    bool isPalindrome(int x) {
        int a = 0 , b = x;
        while (x>0)
        {
            int rem = x%10;
            if((a>INT_MAX/10)|| (a<INT_MIN/10)){
                return 0;
            }
            x= x / 10;
            a = a*10 + rem;
        }
        if ( b == a) {
            return 1;
        }
        else{
            return 0;
        }
    }
};