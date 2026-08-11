class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        for(int i = 1;i<n;i++){
            if(nums[i] == nums[i-1]+1){
                sum += nums[i];
            }else{
                break;
            }
        }
        while(true){
            bool found = false;

            for(int num:nums){
                if(num == sum){
                    found = true;
                    break;
                }
            }
            if(!found){
                return sum;
            }
            sum++;
        }
    }
};