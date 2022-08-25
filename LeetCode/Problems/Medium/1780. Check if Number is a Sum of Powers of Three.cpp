https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/




class Solution {
public:
    bool checkPowersOfThree(int n) {
        if(n==0 || n==1){
            return 1;
        }
        else{
            int t = n;
            int k = 0;
            while(t>2){
                t /=3;
                k++;
            }
            if(n >= 2 *pow(3,k)){
                return 0;
            }
            return checkPowersOfThree(n-pow(3,k));
        }
    }
};