https://www.geeksforgeeks.org/problems/euler-circuit-and-path/1




class Solution {
public:
	int isEulerCircuit(int v, vector<int>adj[]){
        int c=0;
        for(int i=0;i<v;i++)
            if(adj[i].size()&1)
                ++c;
        return c>2?0:c==0?2:1;
    }
};