https://www.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1




class Solution {
    public static void zigZag(int n, int[] arr) {
        // code here
        for(int i=1;i<n;++i){
            if(i%2 != 0){
                if(arr[i] < arr[i-1]){
                    int temp = arr[i];
                    arr[i] = arr[i-1];
                    arr[i-1] = temp;
                }
            }
            else{
                if(arr[i] > arr[i-1]){
                    int temp = arr[i];
                    arr[i] = arr[i-1];
                    arr[i-1] = temp;
                }
            }
        }
    }
}