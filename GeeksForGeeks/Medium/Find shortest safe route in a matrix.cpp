https://www.geeksforgeeks.org/problems/find-shortest-safe-route-in-a-matrix/1




class Solution
{
public:
    int findShortestPath(vector<vector<int>> &mat)
    {
       // code here
       int r = mat.size(), c = mat[0].size();
       int dir[5] = {-1, 0, 1, 0, -1};
       
       for(int i=0; i<r; i++)
       {
           for(int j=0; j<c; j++)
           {
               if(mat[i][j] == 0)
               {
                   for(int d=0; d<4; d++)
                   {
                       int x = i+dir[d], y = j+dir[d+1];
                       
                       if(x >= 0 and x < r and y >= 0 and y < c and mat[x][y] == 1)
                        mat[x][y] = 2;
                   }
               }
           }
       }
       
       vector<vector<bool>> visited(r, vector<bool> (c, false));
       queue<pair<int,int>> Q;
       
       for(int i=0; i<r; i++)
       {
           if(mat[i][0] == 1)
           {
               Q.push({i,0});
               visited[i][0] = true;
           }
       }
       
       int level = 1;
       
       while(!Q.empty())
       {
           int sz = Q.size();
           
           while(sz--)
           {
               auto cur = Q.front();
               Q.pop();
               
               int X = cur.first, Y = cur.second;
               
               if(Y == c-1)
                    return level;
                
                for(int d=0; d<3; d++)
                {
                    int x = X+dir[d], y = Y+dir[d+1];
                    
                    if(x >= 0 and x < r and y >= 0 and y < c and mat[x][y] == 1 and !visited[x][y])
                    {
                        Q.push({x,y});
                        visited[x][y] = true;
                    }
                }
           }
           
           level++;
       }
       
       return -1;
    }
};