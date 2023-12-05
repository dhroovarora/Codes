https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1




class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int mini = arr[n-1] - arr[0] ; 
        for(int j = 1; j < n; j++){
            if(arr[j] - k < 0)continue;
            mini = min(mini , max(arr[n-1] - k,arr[j-1]+k) - min(arr[0]+k,arr[j]-k));
        }
        return mini; 
    }
};