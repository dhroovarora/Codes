https://practice.geeksforgeeks.org/problems/fitting-the-array1514/1




class Solution{
public:
    
    bool isFit(int arr[], int brr[], int n){
        // code here
        sort(arr,arr + n);
        sort(brr,brr + n);
        for(int i=0;i<n;i++){
            if(brr[i] < arr[i])
                return 0;
        }
        return 1;
    }
};