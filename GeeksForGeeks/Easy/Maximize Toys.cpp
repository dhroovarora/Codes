https://practice.geeksforgeeks.org/problems/maximize-toys0331/1?page=3&difficulty[]=-1&difficulty[]=0&status[]=unsolved&sortBy=submissions




//User function Template for C++

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        sort(arr.begin(),arr.end());
        int ans = 0;
        for(int i=0;i<N;++i){
            if(K >= arr[i]){
                K -= arr[i];
            }
            else
                break;
            ++ans;
        }
        return ans;
    }
};