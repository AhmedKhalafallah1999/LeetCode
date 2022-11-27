class Solution {
public:
    string sortSentence(string s) {
        map<int,string>mp;
        int index=0;
        s+=' ';
        for (int i=0 ; i<s.size() ; i++){
            if (s[i]==' '){
                mp[(int)s[i-1]] = s.substr(index,i-1-index);
                index = i+1;
            }
        }
        string ans;
        for (auto it:mp){
            ans+=it.second;
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};