https://www.codingninjas.com/codestudio/problems/ninja-s-training_3621003?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0




// Using Memoization

// int helper(int n,vector<vector<int>> &points,vector<vector<int>> &dp,int last){
//     if(n==0){
//         int ans = 0;
//         for(int i=0;i<3;i++){
//             if(i!= last)
//                 ans = max(ans,points[0][i]);
//         }
//         return dp[0][last] = ans;
//     }
//     if(dp[n][last] != -1){
//         return dp[n][last];
//     }
//     int ans = 0;
//     for(int i=0;i<3;i++){
//         if(i != last){
//             int temp = points[n][i] + helper(n-1,points,dp,i);
//             ans = max(ans,temp);
//         }
//     }
//     return dp[n][last] = ans;
// }


int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    // using memoization

    // vector<vector<int>> dp(n,vector<int> (4,-1));
    // return helper(n-1,points,dp,3);

    // using Tabulation

    // vector<vector<int>> dp(n,vector<int> (4,0));
    // dp[0][0] = max(points[0][1],points[0][2]);
    // dp[0][1] = max(points[0][0],points[0][2]); 
    // dp[0][2] = max(points[0][0],points[0][1]);
    // dp[0][3] = max(max(points[0][0],points[0][1]),points[0][2]);

    // for(int day=1;day<n;day++){
    //     for(int last=0;last<4;last++){
    //         for(int task=0;task<3;task++){
    //             if (task != last) {
    //                 int temp = points[day][task] + dp[day-1][task];
    //                 dp[day][last] = max(dp[day][last], temp);
    //             }
    //         }
    //     }
    // } 
    // return dp[n-1][3];

    // BEST METHOD SPACE OPTIMIZATION

    vector<int> dp(4,0);

    dp[0] = max(points[0][1],points[0][2]);
    dp[1] = max(points[0][0],points[0][2]); 
    dp[2] = max(points[0][0],points[0][1]);
    dp[3] = max(max(points[0][0],points[0][1]),points[0][2]);

    for(int day=1;day<n;day++){
        vector<int> temp(4,0);
        for(int last=0;last<4;last++){
            for(int task=0;task<3;task++){
                if (task != last) {
                    temp[last] = max(temp[last], points[day][task] + dp[task]);
                }
            }
        }
        dp = temp;
    } 
    return dp[3];
}