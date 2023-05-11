https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/0




class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int n = array1.size() + array2.size();
        int min;
        int i = 0;
        int j = 0;
        int k = 0;
        int arr[n];
        while(i<array1.size() && j<array2.size()){
            if(array1[i] < array2[j]){
                arr[k++] = array1[i];
                i++;
            }
            else{
                arr[k++] = array2[j];
                j++;
            }
        }
        if(i<array1.size()){
            for(;i<array1.size();i++){
                arr[k++] = array1[i];
            }
        }
        else if(j<array2.size()){
            for(;j<array2.size();j++){
                arr[k++] = array2[j];
            }
        }
        if(n%2){
            double dhroov = arr[n/2];
            return dhroov;
        }
        else{
            double dhroov = arr[n/2] + arr[n/2 - 1];
            return dhroov/2;
        }
    }
};