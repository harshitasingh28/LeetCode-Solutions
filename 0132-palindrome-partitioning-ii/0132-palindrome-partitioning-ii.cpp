class Solution {
public:
    bool isPalindome(int start, int end, string& s){
        while(start <= end){
            if(s[start]!= s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    int f(int i, string& s, vector<int>& dp){
        if(i == s.length())return 0;
       // string temp = "";
        int mini = INT_MAX;
        if(dp[i] != -1)return dp[i];
        for(int j = i;j<s.length();j++){
               //temp += s[j];
               if(isPalindome(i, j, s)){
                int cost = 1 + f(j+1, s, dp);
                 mini = min(mini, cost);
               }
        }
        return dp[i] = mini;
    }
    int minCut(string s) {
        int l = s.length();
        vector<int> dp(l, -1);
        return f(0, s, dp) - 1;
    }
};