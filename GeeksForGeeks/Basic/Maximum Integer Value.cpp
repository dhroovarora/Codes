https://practice.geeksforgeeks.org/problems/maximum-integer-value1434/1?page=4&difficulty[]=-1&status[]=unsolved&sortBy=submissions




class Solution {
  public:
    long long int MaximumIntegerValue(string S) {
        // code here
        long long int ans = 0;
        for(int i=0;i<S.size();++i){
            while(i<S.size() && S[i] == '0'){
                ++i;
            }
            if(i<S.size()){
                if(ans == 0 || ans == 1 || S[i] == '0' || S[i] == '1'){
                    ans += (S[i] - '0');
                }
                else{
                    ans *= (S[i] - '0');
                }
            }
        }
        return ans;
    }
};