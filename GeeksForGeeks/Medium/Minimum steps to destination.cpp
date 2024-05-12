https://www.geeksforgeeks.org/problems/minimum-number-of-steps-to-reach-a-given-number5234/1




class Solution {
  public:
    int minSteps(int d) {
            // code here
        int sum = 0;
        int steps = 0;
        while(sum!=d) {
            sum+=steps;
            if(sum==d)
                return steps;
            else if(sum>d) {
                int temp = sum-d;
                if(temp%2==0)
                    break;
            }
            ++steps;
        }
        return steps;
    }
};