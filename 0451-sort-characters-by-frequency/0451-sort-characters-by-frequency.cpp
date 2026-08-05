class Solution {
public:
    static bool cmp(pair<char, int>& a, pair<char, int>& b){
        return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(int i = 0;i<s.length(); i++){
            mp[s[i]]++;
        }
        vector<pair<char, int>> temp;
        for(auto it:mp){
            temp.push_back(it);
        }
        sort(temp.begin(), temp.end(), cmp);
        string res = "";
        for(int i = 0;i<temp.size();i++){
            res.append(temp[i].second, temp[i].first);
        }
        return res;
    }
};