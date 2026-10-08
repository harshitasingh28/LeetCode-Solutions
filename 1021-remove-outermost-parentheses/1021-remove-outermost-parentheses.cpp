class Solution {
public:
    string removeOuterParentheses(string s) {
        int len = s.length();
        int level = 0;
        string result = "";
        for(auto it:s){
            if(it == '('){
                if(level > 0)result+=it;
                level++;
            }else if(it == ')'){
                level--;
                if(level > 0)result+=it;
            }
        }
        return result;
    }
};