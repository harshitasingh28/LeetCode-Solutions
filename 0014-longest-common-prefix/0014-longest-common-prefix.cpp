class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int l = str.size();
        sort(str.begin(), str.end());
        int n = str[0].length();
        int m = str[l-1].length();
        int i = 0;
        int j = 0;
        string res = "";
        while(i < n && j < m){
            if(str[0][i] != str[l-1][j]){
                break;
            }    
                res += str[0][i];
                i++;
                j++;
            
        }
        return res;
    }
};