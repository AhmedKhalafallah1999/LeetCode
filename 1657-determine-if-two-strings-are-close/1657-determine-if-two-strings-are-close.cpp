class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size()!=word2.size()) return false;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for (auto x:word1) mp1[x]++;
        for (auto y:word2) mp2[y]++;
        if (mp1.size()!=mp2.size()) return false;
        vector<int>m;
        vector<int>n;
        for (auto z : mp1){
            if (mp2[z.first]==0) return false;
            m.push_back(z.second);
            n.push_back(mp2[z.first]);
        }
        sort(m.begin(),m.end());
        sort(n.begin(),n.end());
        if (m.size()!=n.size()) return false;
        for (int i=0 ; i<m.size();i++){
            if (m[i]!=n[i]){
                return false;
            }
        }
        return true;
        
    }
};