https://leetcode.com/problems/power-of-two/




class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if(n==0){
        //     return 0;
        // }
        // if(n==1){
        //     return 1;
        // }
        // if(n%2==0){
        //     return isPowerOfTwo(n/2);
        // }
        // else{
        //     return 0;
        // }
        return (n>0 && ((n&(n-1))==0));
    }
};