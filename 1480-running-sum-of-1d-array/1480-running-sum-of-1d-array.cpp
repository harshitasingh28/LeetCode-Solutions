class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int prefixSum = 0;
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            prefixSum += nums[i];
            ans.push_back(prefixSum);
        }
        return ans;
    }
};