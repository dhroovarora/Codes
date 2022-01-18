class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    string q;
    q = to_string(n);
    for(int i=0;i<q.size();i++)
    {
        if(q[i] == '0')
        {
            q[i] = '5';
        }
    }
    stringstream ss;
    ss << q;
    int o;
    ss >> o;
    return o;
    }
};