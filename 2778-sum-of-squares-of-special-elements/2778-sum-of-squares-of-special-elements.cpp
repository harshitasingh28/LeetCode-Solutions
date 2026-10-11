class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sq = 0;
        for(int i = 1;i<=nums.size();i++){
            if(n % i == 0){
                sq += nums[i-1]*nums[i-1];
            }
        }
        return sq;
    }
};