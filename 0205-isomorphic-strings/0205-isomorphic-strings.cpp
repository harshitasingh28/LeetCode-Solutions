class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> mp1;
        int n = s.length();
        int m = t.length();
        int i = 0;
        int j = 0;
        for(int i = 0;i<n;i++){
            if(mp.find(s[i]) != mp.end() && mp[s[i]] != t[i]){
                return false;
            }
            if(mp1.find(t[i]) != mp1.end() && mp1[t[i]] != s[i]){
                return false;
            }
            mp[s[i]] = t[i];
            mp1[t[i]] = s[i];
        }
        
        return true;
    }
};