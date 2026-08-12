class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxLen = 0;
        unordered_map<int, int> mp;
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                sum++;
            }else{
                sum--;
            }
            if(sum == 0){
                maxLen = i+1;
            }else if(mp.find(sum) != mp.end()){
                maxLen = max(maxLen, i-mp[sum]);
            }else{
                mp[sum] = i;
            }
        }
        return maxLen;
    }
};