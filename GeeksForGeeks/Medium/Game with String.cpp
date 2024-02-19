https://www.geeksforgeeks.org/problems/game-with-string4100/1




class Solution{
public:
    int minValue(string s, int k){
        vector<int> arr(26, 0);
        int n = s.size();
        for(int i = 0; i < n; i++) {
            arr[s[i] - 'a']++;
        }
        
        priority_queue<pair<int, char>> pq;
        for(int i = 0; i < 26; i++) {
            if(arr[i] > 0) {
                pq.push({arr[i], i + 'a'});
            }
        }
       
        while(k > 0 && !pq.empty()) {
            auto it = pq.top();
            
            int freq=it.first;
            char ch=it.second;
            pq.pop();
            if(freq > 1) {
                pq.push({freq - 1, ch});
            }
            k--;
        }
       
        int ans = 0;
        while(!pq.empty()) {
              auto it = pq.top();
            
            int freq=it.first;
            char ch=it.second;
            pq.pop();
            ans += (freq * freq);
        }
        return ans;
    }
};