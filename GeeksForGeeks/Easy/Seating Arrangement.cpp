https://practice.geeksforgeeks.org/problems/seating-arrangement--170647/1?page=5&difficulty[]=-1&difficulty[]=0&status[]=unsolved&sortBy=submissions




//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        if(m==1){
            if(seats[0] == 0 && n == 1)
                return 1;
            else if(seats[0] == 1 && n == 0)
                return 1;
            return 0;
        }
        int ans = 0,z=0;
        int i = 0;
        while(i<m && seats[i] == 0){
            ++z;
            ++i;
        }
        ans += z/2;
        z = 0;
        int j = m-1;
        while(j>=i && seats[j] == 0){
            ++z;
            --j;
        }
        ans += z/2;
        z = 0;
        for(;i<=j;++i){
            while(i<=j && seats[i] == 0){
                ++z;
                ++i;
            }
            ans += (z-1)/2;
            z = 0;
        }
        return (ans >= n);
    }
};