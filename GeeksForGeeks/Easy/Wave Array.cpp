https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1




class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code 
        for(int i=1;i<n;i=i+2)
            swap(arr[i-1],arr[i]);
    }
};