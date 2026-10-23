class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(nums[i] - nums[j] == k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};