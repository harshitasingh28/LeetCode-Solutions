class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int small = INT_MAX;
        int large = INT_MIN;
        for(int i = 0;i<n;i++){
            if(nums[i]< small){
                small = nums[i];
            }
            if(nums[i] > large){
                large = nums[i];
            }
        }
        int maxi = 1;
        for(int i = 1;i<= large;i++){
            if(small % i == 0 && large % i == 0){
                maxi = max(maxi, i);
            }
        }
        return maxi;
    }
};