class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;
        int mini1 = INT_MAX;
        int mini2 = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>first){
                third = second;
                second = first;
                first = nums[i];
            }else if(nums[i]>second){
                third = second;
                second = nums[i];
            }else if(nums[i] > third){
                third = nums[i];
            }
             if(nums[i] < mini1){
                mini2 = mini1;
                mini1 = nums[i];
             }else if(nums[i]<mini2){
                mini2 = nums[i];
             }
        }
        return max((first*second*third), (mini1*mini2*first));
    }
};