https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1




class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dhroov(n);
        int c[n+1]={0};
        for(int i=0;i<n;i++){
            c[arr[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(c[i]>=2)dhroov[0]=i;
            if(c[i]==0)dhroov[1]=i;
        }
        return dhroov;
    }
};