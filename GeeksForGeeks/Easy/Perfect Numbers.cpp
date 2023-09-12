https://practice.geeksforgeeks.org/problems/perfect-numbers3207/1




class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        
        long sum = 1;

        for(long i=2;i*i<=N;i++)
            if(N%i == 0)
                sum = sum + i + (N/i);
        if(sum == N && N!=1)
            return 1;
        return 0;
    }
};