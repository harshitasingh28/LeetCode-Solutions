class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIdx = -1;
        int minEle = INT_MAX;
        int maxIdx = -1;
        int maxEle = INT_MIN;
        for(int i = 0;i<n;i++){
            if(maxEle < nums[i]){
                maxEle = nums[i];
                maxIdx = i;
            }
            if(minEle > nums[i]){
                minEle = nums[i];
                minIdx = i;
            }
        }
        int l = min(minIdx, maxIdx);
        int r = max(minIdx, maxIdx);
        int front = r+1;
        int last = n-l;
        int both = (l+1) + (n-r);
        int ans = min(front, min(last, both));
        return ans;
    }
};