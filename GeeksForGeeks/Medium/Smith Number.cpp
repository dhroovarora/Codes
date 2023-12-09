https://www.geeksforgeeks.org/problems/smith-number4132/1






class Solution {
  public:
    int digitSum(int n) {
        // code here
        int temp = n;
        int ans = 0;
        while(temp){
            ans += temp%10;
            temp /= 10;
        }
        return ans;
    }
    int smithNum(int n){
        int sum = 0;
        int k = n;
        int temp = digitSum(n);
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                sum += digitSum(i);
                n /= i;
            }
        }
        if(n>1 && n!=k)
            sum += digitSum(n);
        
        return sum==temp?1:0;
    }
};