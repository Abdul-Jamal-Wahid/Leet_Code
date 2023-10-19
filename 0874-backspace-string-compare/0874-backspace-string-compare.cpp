class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="",ss="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && s1.size()==0){
                continue;
            }else if(s[i]=='#'){
                s1.pop_back();
            }else{
                s1+=s[i];
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#' && ss.size()==0){
                continue;
            }else if(t[i]=='#'){
                ss.pop_back();
            }else{
                ss+=t[i];
            }
        }
        
        if(s1==ss){
            return 1;
        }else
        return 0;
    }
};