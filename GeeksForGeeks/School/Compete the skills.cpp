https://practice.geeksforgeeks.org/problems/compete-the-skills5807/1?page=1&difficulty[]=-2&status[]=unsolved&sortBy=submissions




class Solution{
    public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        // Your code goes here
        for(int i=0;i<3;++i)
            if(a[i] != b[i])
                (a[i] > b[i]) ? ++ca : ++cb;
    }
};