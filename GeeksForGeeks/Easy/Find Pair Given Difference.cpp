https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1




class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int i=0,j=1;
        while(j<n){
            int a = arr[j] - arr[i];
            if(a == x)
                return 1;
            else if(a < x)
                ++j;
            else{
                ++i;
                if(i==j)
                    ++j;
            }
        }
        return -1;
    }
};