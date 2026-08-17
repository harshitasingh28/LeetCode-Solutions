class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int n = s.length();
        int i = n-1;
            while(i>=0 && s[i] == ' '){
                i--;
            }
            while(i>=0 && s[i]!=' '){
                cnt++;
                i--;
            }
        return cnt;
    }
};