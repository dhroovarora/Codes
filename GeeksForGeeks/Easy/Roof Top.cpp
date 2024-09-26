https : // www.geeksforgeeks.org/problems/roof-top-1587115621/1

        class Solution
{
public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(int A[], int N)
    {
        // Your code here
        int ans = 0;
        int dhroov = 0;
        for (int i = 0; i < N - 1; i++)
        {
            if (A[i] < A[i + 1])
            {
                ans++;
            }
            else
            {
                ans = 0;
            }
            dhroov = max(ans, dhroov);
        }
        return dhroov;
    }
};