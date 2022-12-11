https://leetcode.com/problems/convert-the-temperature/description/




class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> v;
        v.push_back(celsius + 273.15);
        v.push_back(celsius*1.8 + 32);
        return v;
    }
};