class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int j = nums[0];
        for(int i = 0;i<nums.size();i++){
            while(nums[i] != j){
                ans.push_back(j);
                j++;
            }
            j++;
        }
        return ans;
    }
};