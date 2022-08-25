https://leetcode.com/problems/add-digits/




class Solution {
public:
    int addDigits(int num) {
        if(num<10){
            return num;
        }
        else{
            int  a = 0;
            while(num){
                a += num%10;
                num /= 10;
            }
            return addDigits(a);
        }
    }
};