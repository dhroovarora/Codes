https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1




class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high)
        {
            if (arr[mid] == 0)
                swap(arr[low++], arr[mid++]);
            else if (arr[mid] == 2)
                swap(arr[mid], arr[high--]);
            else
                mid++;
        }
    }
};