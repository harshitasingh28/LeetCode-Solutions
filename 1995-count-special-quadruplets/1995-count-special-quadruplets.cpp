class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                    for(int t = k+1;t<n;t++){
                        if(nums[i]+nums[j]+nums[k] == nums[t]){
                             cnt++;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};