https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1?page=4&difficulty=Basic,Easy&status=unsolved&sortBy=submissions




class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> temp;
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
               temp.push_back(Mat[i][j]);
        sort(temp.begin(), temp.end());
        vector<vector<int>> ans;
        for(int i = 0; i < temp.size(); i++)
        {
            vector<int> a;
            int j = i;
            for(; j < i  +N; j++)
                a.push_back(temp[j]);
            ans.push_back(a);
            i = j - 1;
        }
        return ans;
    }
};