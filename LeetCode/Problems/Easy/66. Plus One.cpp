https://leetcode.com/problems/plus-one/




class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = 1;
        int n = digits.size() -1;
        while(n>=-1){
            if(c==1){
                if(n==(-1)){
                    digits.insert(digits.begin(),1);
                    break;
                }
                else{
                    digits[n] = digits[n] + c;
                    if(digits[n] == 10){
                        digits[n] = 0;
                        n--;
                    }
                    else{
                        c=0;
                        break;
                    }
                }
            }
            else{
                break;
            }
        }
        return digits;
    }
};