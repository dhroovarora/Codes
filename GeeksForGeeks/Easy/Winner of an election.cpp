https://www.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1




class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        vector<string> v;
        map<string,int> m;
        int a = 1;
        for(auto i=0;i<n;++i)
            ++m[arr[i]];
        for(auto i : m)
            if(a<i.second)
                a = i.second;
        for(auto i : m)
            if(i.second == a){
                v.push_back(i.first);
                v.push_back(to_string(a));
                break;
            }
        return v;
    }
};