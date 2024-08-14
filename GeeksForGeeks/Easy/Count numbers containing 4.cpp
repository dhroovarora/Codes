https://www.geeksforgeeks.org/problems/count-numbers-containing-43022/1?timeMachineDate=2024-06-12




class Solution {
  public:
    int countNumberswith4(int N) {
        
        int ans=0;
        
        for(int i=4; i <= N; i++)
        {
            int n=i;
            
            while(n > 0)
            {
                int k=n%10;
                if(k==4)
                {
                    ans++;
                    break;
                }
                n=n/10;
            }
        }
        
        return ans;
    }
};