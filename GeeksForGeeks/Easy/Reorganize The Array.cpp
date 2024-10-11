https://www.geeksforgeeks.org/problems/reorganize-the-array4810/1




class Solution {
public:
    vector<int> rearrange(const vector<int>& arr) {
        vector<int> result(arr.size(), -1); // Initialize the result array with -1
        
        for (int i = 0; i < arr.size(); ++i) {
            // Place the element at its correct position if it lies within the range
            if (arr[i] >= 0 && arr[i] < arr.size()) {
                result[arr[i]] = arr[i];
            }
        }
        
        return result;
    }
};