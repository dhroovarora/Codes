https://practice.geeksforgeeks.org/problems/insertion-sort/1




class Solution
{
    public:
    void insert(int arr[], int j)
    {
        //code here
        int key = arr[j+1];
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        int j;
        for(int i=1;i<n;i++){
            j = i - 1;
            insert(arr,j);
        }
    }
};