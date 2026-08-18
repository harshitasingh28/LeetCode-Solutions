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
    int minCut(string s) {
        int l = s.length();
        vector<int> dp(l+1, 0);
        for(int i = l-1;i>=0;i--){
            int mini = INT_MAX;
            for(int j = i;j<l;j++){
                if(isPalindome(i, j, s)){
                int cost = 1 + dp[j+1];
                mini = min(mini, cost);
                dp[i] = mini;
                }
            }
        }
        return dp[0]-1;
    }
};