https://leetcode.com/problems/power-of-four/




// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//         else{
//             if(n%4==0){
//                 return isPowerOfFour(n/4);
//             }
//             else{
//                 return 0;
//             }
//         }
//     }
// };
class Solution {
public:
    bool isPowerOfFour(int n) {
        int mask = 0x55555555;
        return n > 0 && (n & (n - 1)) == 0 && (n & mask) == n;
    }
};