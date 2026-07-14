class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n = s.length();
        int hash[26];
        for(int i = 0;i<26;i++){
            hash[i] = 0;
        }
        int l = 0;
        int r = 0;
        int maxFreq = 0;
        int maxLen = INT_MIN;
        while(r < n){
            hash[s[r] - 'A']++;
            maxFreq = max(maxFreq, hash[s[r] - 'A']);
            int change = (r-l+1)-maxFreq;
            if(change > k){
                hash[s[l]-'A']--;
                l++;
            }
            if(change <= k){
                maxLen = max(r-l+1, maxLen);
            }
            r++;
        }
        return maxLen;
    }
};