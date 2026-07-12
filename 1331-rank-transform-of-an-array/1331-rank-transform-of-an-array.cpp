class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(n);
        temp = arr;
        sort(temp.begin(), temp.end());
        int rank = 1;
        unordered_map<int, int> mp;
        for(auto x:temp){
            if(mp.find(x) == mp.end()){
                mp[x] = rank++;
            }
        }
        for(int i = 0;i<n;i++){
            temp[i] = mp[arr[i]];
        }
        return temp;
    }
};