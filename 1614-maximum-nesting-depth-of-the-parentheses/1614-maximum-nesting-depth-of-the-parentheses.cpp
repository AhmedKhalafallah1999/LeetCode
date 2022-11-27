class Solution {
public:
    int maxDepth(string s) {
        string ans;
        
        int k=0,maxcoun=0;
        for (int i=0 ; i<s.size() ; i++){
            if (s[i]=='(' || s[i]==')'){
                ans.push_back(s[i]);
            }
        }
        for (int i=0 ; i<ans.size() ; i++){
            if (ans[i]=='('){
                maxcoun=max(maxcoun,++k);
            }else{
               
                k--;
            }
        }
        return maxcoun;
    }
};