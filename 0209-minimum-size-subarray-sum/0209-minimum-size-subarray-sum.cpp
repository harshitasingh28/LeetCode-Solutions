class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //unordered_map<int, int> mp;
        int n = nums.size();
        int sum = 0;
        int l = 0;
        int r = 0;
        int minLen = INT_MAX;
        while(r<n){
            sum += nums[r];
            while(sum >= target){
               minLen = min(minLen, r-l+1);
               sum -= nums[l];
               l++;
            }
            r++;
        }
        if(minLen == numeric_limits<int>::max() ){
            return 0;
        }
        return minLen;
    }
};