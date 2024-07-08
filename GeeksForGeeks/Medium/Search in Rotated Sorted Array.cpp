https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1




class Solution {
  public:
    int search(vector<int>& A, int key) {
        // complete the function here
        int l = 0,h = A.size()-1;
        while(l <= h){
            int m = l + (h-l)/2;
            if(A[m] == key)
                return m;
            if(A[l] <= A[m]){
                if(A[l] <= key && A[m] >= key)
                    h = m - 1;
                else
                    l = m + 1;
            }
            else{
                if(A[h] >= key && A[m] <= key)
                    l = m + 1;
                else
                    h = m - 1;
            }
        }
        return -1;
    }
};