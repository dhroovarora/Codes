https://leetcode.com/problems/construct-the-rectangle/



class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> v;
        for(int i=sqrt(area);i>0;i--){
            if(i*(area/i) == area){
                v.push_back(area/i);
                v.push_back(i);
                break;
            }
        }
        return v;
    }
};