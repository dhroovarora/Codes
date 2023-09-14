https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1




class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int ans = 0;
        while(n){
            if(n%2)
                --n;
            else
                n /= 2;
            ++ans;
        }
        return ans;
    }
};