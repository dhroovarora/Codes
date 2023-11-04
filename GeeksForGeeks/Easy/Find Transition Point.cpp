https://www.geeksforgeeks.org/problems/find-transition-point-1587115620/1




class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int l = 0 , r = n-1 , ans = -1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(arr[m] == 1){
                ans = m;
                r = m - 1;
            }
            else
                l = m + 1;
        }
        return ans;
    }
};