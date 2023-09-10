https://practice.geeksforgeeks.org/problems/relative-sorting4323/1




//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        vector <int> ans;
        
        map <int , int> m;
        
        for(auto x : A1)
            m[x]++;
        
        for(auto temp : A2) {
            if(m.find(temp) != m.end()) {
                auto it = m.find(temp);
                int count = it->second;
                vector<int> v(count, temp);
                ans.insert(ans.end(), v.begin(), v.end());
                m.erase(temp);
            }
        }
        
        for(auto x : m){
            auto ele = x.first;
            int count = x.second;
            vector<int> v(count, ele);
            ans.insert(ans.end(), v.begin(), v.end());
        }
        return ans;
    } 
};