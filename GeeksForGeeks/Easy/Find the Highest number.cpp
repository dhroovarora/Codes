https://www.geeksforgeeks.org/problems/find-the-highest-number2259/1




class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int n = a.size();
        if(a[n-1] > a[n-2])
            return a[n-1];
            
        int i=0,j=n-1;
        while(i<=j){
            int m = (i + (j-i)/2);
            if(a[m] < a[m+1])
                i = m+1;
            else
                j = m-1;
        }
        return a[i];
    }
};