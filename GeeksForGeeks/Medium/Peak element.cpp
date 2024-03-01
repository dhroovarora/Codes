https://www.geeksforgeeks.org/problems/peak-element/1




/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int k=0;
       for(int i=1;i<n;i++){
           if(arr[i-1]<arr[i]){
               k = i;
           }
       }
       return k;
    }
};