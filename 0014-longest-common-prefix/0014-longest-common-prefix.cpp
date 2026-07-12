class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int l = strs.size();
        int i = 0;
        string s = "";
        while(i < strs[0].length()){
            if(strs[0][i] == strs[l-1][i]){
                s+=strs[0][i];
            }else{
                break;
            }
            i++;
        }
        return s;
    }
};