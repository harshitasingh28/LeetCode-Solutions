class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int num = nums.size();
        if(num < 3){
            return num;
        }
        
        int u = 0;
        int n = num;
        while(n > 0){
           u++;
            n /= 2;
        }
        int result = 1;
        for(int i = 0;i<u;++i){
            result *= 2;
        }
        return result;
    }
};