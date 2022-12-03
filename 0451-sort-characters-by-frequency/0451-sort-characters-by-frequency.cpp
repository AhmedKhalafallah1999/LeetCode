class Solution {
public:
  
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        string ans="";
        for (auto x:s){
            mp[x]++;
        }
         priority_queue<pair<int, char>> q;
        for (auto [a,fr] : mp) q.push({fr,a});
        pair<int ,char>pa;

        while(!q.empty()){
            pa = q.top();
            
            q.pop();
            ans+=  string(pa.first , pa.second);
        }
        
    
        
        return ans;
    }
};