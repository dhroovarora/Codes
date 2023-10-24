https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1?page=2&difficulty[]=-1&difficulty[]=0&status[]=unsolved&sortBy=submissions




class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        if(n==1)
            return arr[0];
        int i = 0;
        int j = n - 1;
        while(i<j){
            int m = i + (j-i)/2;
            if(arr[m] > arr[m+1])
                return arr[m+1];
            else if(arr[m] < arr[j]){
                j = m;
            }
            else{
                i = m;
            }
        }
        return arr[i];
    }
};