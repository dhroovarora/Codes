https://www.geeksforgeeks.org/problems/maximum-occured-integer4602/1




class Solution {
    // Function to find the maximum occurred integer in all ranges.
    public static int maxOccured(int n, int l[], int r[], int maxx) {
        int[] arr = new int[maxx + 2];
        for(int i=0;i<n;++i){
            arr[l[i]] += 1;
            arr[r[i] + 1] -= 1;
        }
        
        for(int i=1;i<maxx+1;++i){
            arr[i] += arr[i-1];
        }
        int ans = 0;
        int count = arr[0];
        
        for(int i=1;i<maxx+1;++i){
            if(count < arr[i]){
                count = arr[i];
                ans = i;
            }
        }
        return ans;
    }
}