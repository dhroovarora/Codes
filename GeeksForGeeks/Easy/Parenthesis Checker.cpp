https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1




class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<int> s;
        for(auto i : x){
            if(s.size() == 0 || i == '(' || i == '{' || i == '[')
                s.push(i);
            else if(i == ')'){
                if(s.top() == '(')
                    s.pop();
                else
                    return 0;
            }
            else if(i == '}'){
                if(s.top() == '{')
                    s.pop();
                else
                    return 0;
            }
            else{
                if(s.top() == '[')
                    s.pop();
                else
                    return 0;
            }
        }
        if(s.size() == 0)
            return 1;
        else
            return 0;
    }

};