https://www.geeksforgeeks.org/problems/maximum-meetings-in-one-room/1




class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<vector<int>> temp;
        vector<int> res;
        for(int i = 0; i < N; i++)
        {
            temp.push_back({F[i], i, S[i]});
        }
        sort(temp.begin(), temp.end());
        int endTime = 0;
        for(int i = 0; i < N; i++)
        {
            if(temp[i][2] > endTime)
            {
                endTime = temp[i][0];
                res.push_back(temp[i][1] + 1);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};