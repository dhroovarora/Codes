https://leetcode.com/problems/happy-number/




class Solution {
public:
    // unordered_map<int,int> m;
    // bool isHappy(int n) {
    //     int p=0;
    //     if(n==1){
    //         return 1;
    //     }
    //     else{
    //         while(n!=0){
    //             p += (n%10)*(n%10);
    //             n /= 10;
    //         }
    //         m[p]++;
    //         if(m[p]==2){
    //             return 0;
    //         }   
    //         return isHappy(p);
    //     }
    // }
//         second approach
    //      int sum;
    //      while (n>9) {
    //          sum = 0;
    //          while(n!=0) {
    //              sum += (n%10) * (n%10);
    //              n /= 10;
    //          }
    //          n = sum;
    //      }
    //      return n == 1 or n == 7;
    // }
        
//          third approach
        
        bool isHappy(int n) {
         int sum = n;
         string something = to_string(n);
         while (something.length() > 1) {
               sum = 0;
               for (int i = 0; i < something.length(); i ++) {
                   int someelse = int(something[i]) - '0';
                   sum += someelse * someelse;
               }
               something = to_string(sum);
         }
         return sum == 1 or sum == 7;
    }
};