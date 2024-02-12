https://www.geeksforgeeks.org/problems/recursive-sequence1611/1




class Solution{
public:
    long long sequence(int n){
        // code here
        long long a = 1;
        long long b = 1;
        long long ans = 0;
        while(n--){
            long long temp = a;
            long long single_term = 1;
            while(temp--){
                single_term = (single_term*b)%1000000007;
                ++b;
            }
            ans = (ans+single_term)%1000000007;
            ++a;
        }
        return ans;
    }
};