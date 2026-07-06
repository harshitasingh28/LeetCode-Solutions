class Solution {
public:
    static bool camp(const vector<int>& a, const vector<int>& b){
        if(a[0] == b[0]){
            return a[1] > b[1];
        }
        return a[0] < b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), camp);
        int n = intervals.size();
        vector<vector<int>> ans;
        for(int i = 0;i<n;i++){
            if(ans.empty() || (intervals[i][0] < ans.back()[0] || intervals[i][1] > ans.back()[1])){
                ans.push_back(intervals[i]);
            }else if(intervals[i][0]>=ans.back()[0] && intervals[i][1] <= ans.back()[1]){
                continue;
            }
        }
        return ans.size();
    }
};