https://www.hackerrank.com/challenges/30-interfaces/problem?isFullScreen=true





class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int ans = 0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0)
                if( i != n/i)
                    ans += i + n/i;
                else ans += i;
        }
        return ans;
    }
};