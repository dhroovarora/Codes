https://practice.geeksforgeeks.org/problems/queries-on-a-matrix0443/0




  public:
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
        // Code here
        vector<vector<int>> arr(n,vector<int>(n,0));
        
        for(auto q:Queries){
            
            int a = q[0];
            int b = q[1];
            int c = q[2];
            int d = q[3];
        
            for(int i=a;i<=c;i++){
                for(int j=b;j<=d;j++){
                    arr[i][j]++;
                }
            }
        }
        return arr;
    }
    
    
    /* For better time complexity better approach
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
        // Code here
        vector<vector<int>> vec(n, vector<int>(n, 0));
        for(auto v: Queries){
            int a = v[0];
            int b = v[1];
            int c = v[2];
            int d = v[3];
            
            for(int i=a; i<=c; i++){
                vec[i][b]++;
            }
            if(d+1 < n){
                for(int i = a; i<=c; i++){
                    vec[i][d+1]--;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                vec[i][j] = vec[i][j-1] + vec[i][j];
            }
        }
        return vec;
    }
    
    */
};