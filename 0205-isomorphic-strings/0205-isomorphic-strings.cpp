class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> mp1;
        int n = s.length();
        int m = t.length();
        int i = 0;
        int j = 0;
        while(i<n && j<m){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = t[j];
                i++;
                j++;
            }else{
                if(mp[s[i]] != t[j]){
                    return false;
                } 
                i++;
                j++;
            }
        }
        i = 0;
        j = 0;
        while(i<n && j<m){
            if(mp1.find(t[i]) == mp1.end()){
                mp1[t[i]] = s[j];
                i++;
                j++;
            }else{
                if(mp1[t[i]] != s[j]){
                    return false;
                } 
                i++;
                j++;
            }
        }
        return true;
    }
};