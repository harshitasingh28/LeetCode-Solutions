class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;
        for(int i = 0;i<n;i++){
            if(result.empty() || result.back()[1] < arr[i][0]){
                result.push_back(arr[i]);
            }else{
                result.back()[1] = max(result.back()[1], arr[i][1]);
            }
        }
        return result;
    }
};