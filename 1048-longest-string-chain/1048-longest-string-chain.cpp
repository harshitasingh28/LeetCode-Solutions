class Solution {
public:
    bool comp(string a, string b){
        int n = a.length();
        if(1 + b.size() != a.size())return false;
        int first = 0;
        int second = 0;
        while(first < a.size()){
            if(second < b.size() && a[first] == b[second]){
                first++;
                second++;
            }else{
                first++;
            }
        }
        if(first == a.size() && second == b.size()){
            return true;
        }
        return false;
    }
    static bool camp(string& s1, string& s2){
        return s1.size() < s2.size();
    }
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        sort(words.begin(), words.end(), camp);
        vector<int> dp(n, 1);
        int maxi = 1;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<i;j++){
                if(comp(words[i], words[j]) && 1 + dp[j]>dp[i]){
                    dp[i] = 1 + dp[j];
                }
            }
            maxi = max(dp[i], maxi);
        }
        return maxi;
    }
};