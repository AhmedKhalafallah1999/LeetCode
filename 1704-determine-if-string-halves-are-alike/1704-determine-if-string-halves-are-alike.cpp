class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char>one;
        vector<char>two;
        for (int i=0 ; i<(s.size()/2) ; i++){
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                one.push_back(s[i]);
        }
    }
    for (int i=s.size()/2 ; i<s.size() ; i++){
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                two.push_back(s[i]);
        }
    }
    if (one.size()==two.size()){
        return true;
    }
    return false;
    }
};