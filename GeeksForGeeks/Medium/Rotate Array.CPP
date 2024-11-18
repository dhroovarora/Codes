https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1




class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
         int i,b[d];
    if(d>=n) 
         d=d%n;

    for(i=0;i<d;i++){
        b[i]=arr[i];
    }
    int j=0;
    for(i=d;i<n;i++){
        arr[j++]=arr[i];
    }
    int k=0;
    for(i=j;i<n;i++){
        arr[i]=b[k];
        k++;
    }
    }
};